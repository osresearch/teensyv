/**
 * \file
 * Vector line drawing and fonts
 *
 */

#if 0
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <string.h>
#include <util/delay.h>
#include "usb_serial.h"
#include "bits.h"
#endif

#include "hershey.h"
#include "asteroids_font.h"
#include "vector.h"
#include "sin_table.h"
#include "memspaces.h"

#define CONFIG_TEENSY3
#define CONFIG_HERSHEY

#ifdef CONFIG_TEENSY3
#include "core_pins.h"
#endif


static inline void
output_x(
	uint8_t x
)
{
#ifdef CONFIG_TEENSY3
	GPIOD_PDOR = x;
#else
	PORTB = x;
#endif
}


static inline void
output_y(
	uint8_t y
)
{
#ifdef CONFIG_TEENSY3
	GPIOC_PDOR = y;
#else
	PORTD = y;
#endif
}


static void
moveto(
	uint8_t x,
	uint8_t y
)
{
	output_x(x);
	output_y(y);
}


void
line_vert(
	uint8_t x0,
	uint8_t y0,
	uint8_t w
)
{
	moveto(x0, y0);
	for (uint8_t i = 0 ; i < w ; i++)
		output_y(y0++);
}


void
line_horiz(
	uint8_t x0,
	uint8_t y0,
	uint8_t h
)
{
	moveto(x0, y0);
	for (uint8_t i = 0 ; i < h ; i++)
		output_x(x0++);
}


void
line(
	uint8_t x0,
	uint8_t y0,
	uint8_t x1,
	uint8_t y1
)
{
#if 1
	int dx;
	int dy;
	int sx;
	int sy;

/*
	if (x0 == x1)
	{
		if (y0 < y1)
			line_vert(x0, y0, y1 - y0);
		else
			line_vert(x0, y1, y0 - y1);
		return;
	}

	if (y0 == y1)
	{
		if (x0 < x1)
			line_horiz(x0, y0, x1 - x0);
		else
			line_horiz(x1, y0, x0 - x1);
		return;
	}
*/

	if (x0 <= x1)
	{
		dx = x1 - x0;
		sx = 1;
	} else {
		dx = x0 - x1;
		sx = -1;
	}

	if (y0 <= y1)
	{
		dy = y1 - y0;
		sy = 1;
	} else {
		dy = y0 - y1;
		sy = -1;
	}

	int err = dx - dy;

	moveto(x0, y0);
	delayMicroseconds(10);

	while (1)
	{
		if (x0 == x1 && y0 == y1)
			break;

		delayMicroseconds(2);
		int e2 = 2 * err;
		if (e2 > -dy)
		{
			err = err - dy;
			output_x(x0 += sx);
		}
		if (e2 < dx)
		{
			err = err + dx;
			output_y(y0 += sy);
		}
	}

#else
	uint8_t dx;
	uint8_t dy;
	int8_t sx;
	int8_t sy;

	if (x0 < x1)
	{
		dx = x1 - x0;
		sx = 1;
	} else {
		dx = x0 - x1;
		sx = -1;
	}

	if (y0 < y1)
	{
		dy = y1 - y0;
		sy = 1;
	} else {
		dy = y0 - y1;
		sy = -1;
	}

	if (dx > dy)
	{
		while (x0 != x1)
		{
			PORTB = x0;
			PORTD = y0;
			x0 += sx;
			y0 += sy;
		}
	} else {
		while (y0 != y1)
		{
			PORTB = x0;
			PORTD = y0;
			x0 += sx;
			y0 += sy;
		}
	}
#endif
}



void
vector_rot_init(
	vector_rot_t * r,
	uint8_t theta
)
{
	r->theta = theta;
	r->sin_t = sin_lookup(theta);
	r->cos_t = cos_lookup(theta);
}


uint8_t
vector_rot_x(
	const vector_rot_t * r,
	int8_t x,
	int8_t y
)
{
	int32_t x2 = x;
	int32_t w;
	if (r->theta != 0)
	{
		int32_t y2 = y;

		w = (r->scale * (x2 * r->cos_t + y2 * r->sin_t)) / (32 * 256);
	} else {
		w = (r->scale * x2) / 64;
	}
	
	return w + r->cx;
}

uint8_t
vector_rot_y(
	const vector_rot_t * r,
	int8_t x,
	int8_t y
)
{
	int32_t x2 = x;
	int32_t y2 = y;
	int32_t z;

	if (r->theta != 0)
		z = (r->scale * (y2 * r->cos_t - x2 * r->sin_t)) / (32 * 256);
	else
		z = (r->scale * y2) / 64;

	return z + r->cy;
}
	

static inline int8_t
scaling(
	int8_t d,
	uint8_t scale
)
{
	if (scale == 0)
		return d / 4;
	if (scale == 1)
		return (d * 2) / 3;
	if (scale == 2)
		return d;
	if (scale == 3)
		return (d * 3) / 2;
	if (scale == 4)
		return d * 2;
	return d;
}



static inline uint8_t
_draw_char(
	const uint8_t x,
	const uint8_t y,
	uint8_t c,
	const uint8_t scale
)
{
	uint8_t ox = x;
	uint8_t oy = y;
	uint8_t pen_down = 0;

	if (c < 0x20)
		return 0;

#ifdef CONFIG_HERSHEY
	const hershey_char_t * p = &hershey_simplex[c - 0x20];
	const uint8_t count = pgm_read_byte(&p->count);

	for (uint8_t i = 0 ; i < count ; i++)
	{
/*
		const int8_t px = pgm_read_byte(&p->points[i*2+0]);
		const int8_t py = pgm_read_byte(&p->points[i*2+1]);
*/
		const uint16_t combo = *(const uint16_t*)&p->points[i*2];

		if (combo == 0xFFFF)
		{
			pen_down = 0;
			continue;
		}

		const int8_t px = combo >> 0;
		const int8_t py = combo >> 8;

		const uint8_t nx = x + scaling(px, scale);
		const uint8_t ny = y + scaling(py, scale);

		if (pen_down)
			line(ox, oy, nx, ny);

		pen_down = 1;
		ox = nx;
		oy = ny;
	}

	const uint8_t width = pgm_read_byte(&p->width);
	return scaling(width, scale);
#else
	if ('a' <= c && c <= 'z')
		c += 'A' - 'a';

	const asteroids_char_t * const p = &asteroids_font[c - 0x20];
	for (uint8_t i = 0 ; i < 8 ; i++)
	{
		const uint8_t xy = pgm_read_byte(&p->points[i]);
		if (xy == 0xFF)
			break;
		if (xy == 0xFE)
		{
			pen_down = 0;
			continue;
		}

		const int8_t px = ((xy >> 4) & 0xF) * 2;
		const int8_t py = ((xy >> 0) & 0xF) * 2;
		const uint8_t nx = x + scaling(px, scale);
		const uint8_t ny = y + scaling(py, scale);

		if (pen_down)
			line(ox, oy, nx, ny);

		pen_down = 1;
		ox = nx;
		oy = ny;
	}

	return scaling(20, scale);
#endif
}


uint8_t
draw_char_big(
	uint8_t x,
	uint8_t y,
	uint8_t c
)
{
	return _draw_char(x, y, c, 3);
}


uint8_t
draw_char_med(
	uint8_t x,
	uint8_t y,
	uint8_t c
)
{
	return _draw_char(x, y, c, 2);
}

uint8_t
draw_char_small(
	uint8_t x,
	uint8_t y,
	uint8_t c
)
{
	return _draw_char(x, y, c, 1);
}


void
draw_char_rot(
	const vector_rot_t * const r,
	const int8_t x,
	const int8_t y,
	char c
)
{
	// we never use the original points since the lines always
	// start pen-up
	uint8_t ox = 0; // vector_rot_x(r, x, y);
	uint8_t oy = 0; // vector_rot_y(r, x, y);
	uint8_t pen_down = 0;

	if (c < 0x20)
		return;

	if ('a' <= c && c <= 'z')
		c += 'A' - 'a';

	const asteroids_char_t * const p = &asteroids_font[c - 0x20];
	for (uint8_t i = 0 ; i < 8 ; i++)
	{
		const uint8_t xy = pgm_read_byte(&p->points[i]);
		if (xy == 0xFF)
			break;
		if (xy == 0xFE)
		{
			pen_down = 0;
			continue;
		}

		const int8_t px = ((xy >> 4) & 0xF) * 2;
		const int8_t py = ((xy >> 0) & 0xF) * 2;

		const int8_t nx = x + px;
		const int8_t ny = y + py;
		const uint8_t rx = vector_rot_x(r, nx, ny);
		const uint8_t ry = vector_rot_y(r, nx, ny);

		if (pen_down)
			line(ox, oy, rx, ry);

		pen_down = 1;
		ox = rx;
		oy = ry;
	}
}


void
vector_setup(void)
{
#ifdef CONFIG_TEENSY3
	// the pins are mapped oddly, so we have an array of them.
	static const uint8_t pins[] = {
		15, 22, 23, 9, 10, 13, 11, 12,	// Port C
		2, 14, 7, 8, 6, 20, 21, 5,	// Port D
	};

	for(unsigned i = 0 ; i < sizeof(pins)/sizeof(*pins) ; i++)
		pinMode(pins[i], OUTPUT);
#else
	// the registers are directly mapped
	DDRD = 0xFF;
	DDRB = 0xFF;
#endif
}
