/** \file
 * Draw antialiases lines (with optional undrawing)
 */
#include <stdio.h>
#include "sin_table.h"
#include "draw.h"
#include "mathutil.h"
#include "camera.h"
#include "wireframe.h"

#include <termios.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int
serial_open(
	const char * const dev
)
{
	const int fd = open(dev, O_RDWR | O_NONBLOCK | O_NOCTTY, 0666);
	if (fd < 0)
		return -1;

	// Disable modem control signals
	struct termios attr;
	tcgetattr(fd, &attr);
	attr.c_cflag |= CLOCAL | CREAD;
	attr.c_oflag &= ~OPOST;
	tcsetattr(fd, TCSANOW, &attr);

	return fd;
}


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


int main(int argc, const char ** argv)
{
	if (argc > 1)
	{
		// open a serial port
		int fd = serial_open(argv[1]);
		if (fd < 0)
		{
			perror(argv[1]);
			return -1;
		}

		dup2(fd, 1);
	}

	const unsigned count = ARRAY_COUNT(edges);
	fprintf(stderr, "%d edges\n", count);

	while(1)
	{
		loop();
		usleep(50000);
	}
}
