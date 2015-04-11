/** \file
 * 3D Wireframe structures.
 *
 * A list of vertices in model frame and a list of edges connecting
 * those vertices.
 *
 * Map the projection of each vertex into screen space, un-draw the
 * old edges and then draw the new edges.
 */
#ifndef _wireframe_h_
#define _wireframe_h_

#include "camera.h"
#include "coords.h"


void
wireframe_draw(
	const camera_t * camera,
	const int num_vertex,
	const vertex_t * v,
	const int num_edges,
	const edge_t * e,
	pixel_t * screen_pixels,
	pixel_t * temp
);


#endif
