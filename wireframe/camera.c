#include <stdint.h>
#include <math.h>
#include "draw.h"
#include "camera.h"
#include "sin_table.h"

void
camera_setup(
	camera_t * c,
	int32_t eye_z,
	int8_t a[3]
)
{
	int32_t sx = sin_lookup(a[0]);
	int32_t cx = cos_lookup(a[0]);
	int32_t sy = sin_lookup(a[1]);
	int32_t cy = cos_lookup(a[1]);
	int32_t sz = sin_lookup(a[2]);
	int32_t cz = cos_lookup(a[2]);

	c->r[0][0] = ( cy * cz) / 128;
	c->r[0][1] = ((-cy * sz) + (sx * sy * cz) / 128) / 128;
	c->r[0][2] = (( sx * sz) + (cx * sy * cz) / 128) / 128;

	c->r[1][0] = ( cx * sz) / 128;
	c->r[1][1] = (( cx * cz) + (sx * sy * sz) / 128) / 128;
	c->r[1][2] = ((-sx * cz) + (cx * sy * sz) / 128) / 128;

	c->r[2][0] = (-sy);
	c->r[2][1] = ( sx * cy) / 128;
	c->r[2][2] = ( cx * cy) / 128;

	c->eye_z = eye_z;
}


int
camera_project(
	const camera_t * c,
	const vertex_t * const v,
	pixel_t * const pixel
)
{
	int32_t p[3] = { 0, 0, c->eye_z * 128 };
	for (int i = 0 ; i < 3 ; i++)
		for (int j = 0 ; j < 3 ; j++)
			p[i] += c->r[i][j] * v->x[j];

	if (p[2] <= 0)
	{
		// The point is behind us
		pixel->x = pixel->y = -1;
		return 0;
	}

	// Smaller == wider angle view
	const int32_t zoom = 1;

	// Transform to screen coordinate frame,
	// limiting to the actual boundaries
	int32_t px = (p[1] * c->eye_z * zoom) / p[2] + VSCREEN_WIDTH / 2;
	if (px < 0)
		px = 0;
	if (px >= VSCREEN_WIDTH-1)
		px = VSCREEN_WIDTH-1;
	pixel->x = px;

	int32_t py = (p[0] * c->eye_z * zoom) / p[2] + VSCREEN_HEIGHT / 2;
	if (py < 0)
		py = 0;
	if (py >= VSCREEN_HEIGHT-1)
		py = VSCREEN_HEIGHT-1;
	pixel->y = py;

	return 1;
}


#if 0
#include <stdio.h>
#include "sin_table.c"

int main(void)
{
	camera_t c;
	int8_t euler[3] = { 0, 32, 0 };
	int8_t pos[3] = { 0, 0, -eye_z };
	camera_setup(&c, pos, euler);

	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
			printf(" %3d", c.r[i][j]);
		printf("\n");
	}

	int32_t px, py;
	int32_t x[3] = { 100, 10, 0 };
	camera_project(&c, x, &px, &py);
	printf("%d %d\n", px, py);

	return 0;
}
#endif
