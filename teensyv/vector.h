/**
 * \file
 * Vector line drawing and fonts
 *
 */

#ifndef _vector_h_
#define _vector_h_

#include <stdint.h>

void
vector_init(void);


void
line_vert(
	uint8_t x0,
	uint8_t y0,
	uint8_t w
);

void
line_horiz(
	uint8_t x0,
	uint8_t y0,
	uint8_t h
);


void
line(
	uint8_t x0,
	uint8_t y0,
	uint8_t x1,
	uint8_t y1
);


typedef struct
{
	// center of rotation
	uint8_t cx;
	uint8_t cy;

	// scale of vector, divided by 16
	int8_t scale;

	// Angle from 0 to 255 (== 2 Pi)
	uint8_t theta;

	// precomputed sin/cos
	int8_t sin_t;
	int8_t cos_t;
} vector_rot_t;


void
vector_rot_init(
	vector_rot_t * r,
	uint8_t angle
);


uint8_t
vector_rot_x(
	const vector_rot_t * r,
	int8_t x,
	int8_t y
);


uint8_t
vector_rot_y(
	const vector_rot_t * r,
	int8_t x,
	int8_t y
);


uint8_t
draw_char_big(
	uint8_t x,
	uint8_t y,
	uint8_t val
);

uint8_t
draw_char_med(
	uint8_t x,
	uint8_t y,
	uint8_t val
);

uint8_t
draw_char_small(
	uint8_t x,
	uint8_t y,
	uint8_t val
);


void
draw_char_rot(
	const vector_rot_t * const r,
	int8_t x,
	int8_t y,
	char val
);

#endif
