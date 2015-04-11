/** \file
 * Camera projection transformations.
 */
#ifndef _camera_h_
#define _camera_h_

#include <stdint.h>
#include "coords.h"

typedef struct
{
	int32_t eye_z;
	int8_t r[3][3];
} camera_t ;


/** Initialize the camera to be positioned at x and with euler angles a.
 */
void
camera_setup(
	camera_t * c,
	int32_t eye_z,
	int8_t a[3]
);



/** Project a 3D point to the 2D image.
 * Returns 0 if the point is behind us and should not be drawn.
 */
int
camera_project(
	const camera_t * c,
	const vertex_t * x,
	pixel_t * pixel_out
);

#endif
