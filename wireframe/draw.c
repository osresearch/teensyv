/** \file
 * Drawing functions.
 */
#include "draw.h"
#include <stdio.h>

void
draw_line(
	uint32_t x0,
	uint32_t y0,
	uint32_t x1,
	uint32_t y1
)
{
	printf("%c%c%c%c", x0, y0, x1, y1);
	//printf("P %d,%d -> %d,%d\n", x0, y0, x1, y1);
}
