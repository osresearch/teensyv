/**
 * \file Clock on the oscilloscope
 *
 */

#include "vector.h"
#include "sin_table.h"


static void
draw_hms(
	const uint8_t cx,
	const uint8_t cy,
	const uint8_t h,
	const uint8_t m,
	const uint8_t s
)
{
	draw_char_big( 0+cx, cy, h / 10 + '0');
	draw_char_big(20+cx, cy, h % 10 + '0');
	draw_char_big(40+cx, cy, m / 10 + '0');
	draw_char_big(60+cx, cy, m % 10 + '0');
	draw_char_big(80+cx, cy, s / 10 + '0');
	draw_char_big(100+cx, cy, s % 10 + '0');
}


static void
draw_str(
	uint8_t x,
	uint8_t y,
	const char * str
)
{
	char c;
	while ((c = *str++))
		x += draw_char_med(x, y, c);
}


void
clock_loop(
	const unsigned h,
	const unsigned m,
	const unsigned s
)
{
	// Draw all the digits around the outside
	for (uint8_t th = 0 ; th < 24 ; th += 2)
	{
		uint16_t h2 = th;
		h2 = (h2 * 682) / 64;
		uint8_t x = sin_lookup(h2) * 7 / 8 + 128;
		uint8_t y = cos_lookup(h2) * 7 / 8 + 128;
		draw_char_small(x-8, y-4, th / 10 + '0');
		draw_char_small(x+2, y-4, th % 10 + '0');
	}

	// Draw the hour hand
	const uint8_t cx = 55;
	const uint8_t cy = 64;

	draw_char_big( 0+cx, cy, h / 10 + '0');
	draw_char_big(32+cx, cy, h % 10 + '0');
	draw_char_big(64+cx, cy, m / 10 + '0');
	draw_char_big(96+cx, cy, m % 10 + '0');
	draw_char_big(128+cx, cy, s / 10 + '0');
	draw_char_big(160+cx, cy, s % 10 + '0');

	{
		uint16_t h2 = h;
		h2 = (h2 * 682 + m*11) / 64;
		uint8_t hx = sin_lookup(h2) * 3 / 8 + 128;
		uint8_t hy = cos_lookup(h2) * 3 / 8 + 128;
		line(128, 128, hx, hy);
	}


	{
		uint16_t m2 = m;
		m2 = (m2 * 273 + s*4) / 64;
		uint8_t mx = sin_lookup(m2) * 5 / 8 + 128;
		uint8_t my = cos_lookup(m2) * 5 / 8 + 128;
		line(128, 128, mx, my);
		line_horiz(mx - 5, my, 10);
		line_vert(mx, my - 5, 10);
	}


	// seconds to "degrees" = 
	{
		uint16_t s2 = s;
		uint16_t ms = 0;
		s2 = (s2 * 1092 + ms) / 256;
		uint8_t sx = sin_lookup(s2) * 6 / 8 + 128;
		uint8_t sy = cos_lookup(s2) * 6 / 8 + 128;
		line(128, 128, sx, sy);
	}
}
