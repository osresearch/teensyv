/** \file
 * Draw antialiases lines (with optional undrawing)
 */
#include <stdio.h>
#include "sin_table.h"
#include "draw.h"
#include "mathutil.h"
#include "camera.h"
#include "wireframe.h"

static camera_t camera;
static int8_t euler[3];

// Bring in a model to render
#include "teapot.h"
//#include "cube.h"

#define ARRAY_COUNT(x) (sizeof(x) / sizeof(*x))
static pixel_t pixels[ARRAY_COUNT(vertices)];


void loop(void)
{
	euler[0] += 1;
	static uint8_t t;
	if ((t++) % 30 == 0)
	{
		if (euler[1]++ == 64)
			euler[1] = -63;
	}

	camera_setup(&camera, 4000, euler);


#if 1
	pixel_t temp_pixels[ARRAY_COUNT(pixels)];
	wireframe_draw(
		&camera,
		ARRAY_COUNT(vertices),
		vertices,
		ARRAY_COUNT(edges),
		edges,
		pixels,
		temp_pixels
	);
#else
	for (int i = 0 ; i < ARRAY_COUNT(vertices) ; i++)
	{
		const vertex_t * const v = &vertices[i];
		pixel_t * const p = &pixels[i];
		draw_pixel(COLOR_BLACK24, p->x, p->y);
		camera_project(&camera, v, p);
		draw_pixel(COLOR_GREEN, p->x, p->y);
	}
#endif
}


int main(void)
{
	const unsigned count = ARRAY_COUNT(edges);
	fprintf(stderr, "%d edges\n", count);

	while(1)
	{
		loop();
		usleep(10000);
	}
}
