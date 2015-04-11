/** \file
 * Line and pixel drawing routines.
 * Using a virtual screen buffer that is twice the resolution
 * along each axis so that anti-aliasing can be done later.
 */
#ifndef _draw_h_

#include <stdint.h>

#define VSCREEN_SHIFT 0
#define VSCREEN_WIDTH	256
#define VSCREEN_HEIGHT	256


/* Draw a non-antialised line using Bresenham's_line_algorithm
 * in vscreen coordinates */
void
draw_line(
	uint32_t x0,
	uint32_t y0,
	uint32_t x1,
	uint32_t y1
);


#endif
