/** \file
 * Vertex and edge definition for a cube
 */
#ifndef EDGE_COLOR
#define EDGE_COLOR { 0, 0xFF, 0, 0 }
#endif

static const vertex_t vertices[] = {
	{ { -50, -50, -50 } },
	{ { -50, -50,  50 } },
	{ { -50,  50, -50 } },
	{ { -50,  50,  50 } },
	{ {  50, -50, -50 } },
	{ {  50, -50,  50 } },
	{ {  50,  50, -50 } },
	{ {  50,  50,  50 } },
};
static const edge_t edges[] = {
	{ 0, 1 },
	{ 0, 2 },
	{ 0, 4 },
	{ 1, 3 },
	{ 1, 5 },
	{ 2, 3 },
	{ 2, 6 },
	{ 3, 7 },
	{ 4, 5 },
	{ 4, 6 },
	{ 5, 7 },
	{ 6, 7 },
};
