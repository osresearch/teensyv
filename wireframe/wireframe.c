/** \file
 * Wireframe drawing routine.
 */
#include "wireframe.h"
#include "draw.h"
#include <string.h>

void
wireframe_draw(
	const camera_t * camera,
	const int num_vertices,
	const vertex_t * vertices,
	const int num_edges,
	const edge_t * edges,
	pixel_t * pixels,
	pixel_t * temp
)
{
	for (int i = 0 ; i < num_vertices ; i++)
		camera_project(camera, &vertices[i], &temp[i]);

	uint8_t buf[2 + 4*num_edges];
	buf[0] = num_edges >> 8;
	buf[1] = num_edges >> 0;

	for (int i = 0 ; i < num_edges ; i++)
	{
		const edge_t * const e = &edges[i];
		const pixel_t * new_p0 = &temp[e->v0];
		const pixel_t * new_p1 = &temp[e->v1];

/*
		if (new_p0->x != -1 && new_p1->x != -1)
			draw_line(
				new_p0->x, new_p0->y,
				new_p1->x, new_p1->y
			);
*/
		buf[2 + 4*i + 0] = 255 - new_p0->x;
		buf[2 + 4*i + 1] = 255 - new_p0->y;
		buf[2 + 4*i + 2] = 255 - new_p1->x;
		buf[2 + 4*i + 3] = 255 - new_p1->y;
	}

	write(1, buf, sizeof(buf));
}
