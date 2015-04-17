/** \file
 * Vector display interface.
 *
 * Implements a simple command language to draw vectors on an
 * oscilloscope.
 *
 * Format is 16-bits for the number of line segments,
 * followed by 4-byte line segments (x1,y1,x2,y2).
 *
 * While the segments are being read the beam will be moved
 * between the four corners of the scope to avoid a hot-spot.
 *
 */
#include "vector.h"
#include "clock.h"
#include "sin_table.h"

#define TIMING_PIN 0

#define MAX_POINTS 1024
static unsigned point_count = 4;
static unsigned rx_point_count = 4;
static unsigned draw_buf = 0;
static unsigned rx_buf = 1;
static unsigned rx_bytes = 0;
static uint8_t points[2][MAX_POINTS][4] =  { {
	{ 0, 0, 255, 0 },
	{ 255, 0, 255, 255 },
	{ 255, 255, 0, 255 },
	{ 0, 255, 0, 0 },
} };

void setup()
{
	Serial.begin(9600); // baud rate is ignored
	pinMode(TIMING_PIN, OUTPUT);
	vector_setup();
}

static uint8_t cs;
static uint8_t sec;
static uint8_t min;
static uint8_t hour;


int
read_bytes(void)
{
	if (rx_bytes == 0)
	{
		rx_point_count = Serial.read();
		rx_bytes++;
		return 0;
	}
	if (rx_bytes == 1)
	{
		rx_point_count = rx_point_count << 8 | Serial.read();
		rx_bytes++;
		return 0;
	}

	uint8_t * const p = points[rx_buf][(rx_bytes-2) / 4];
	p[(rx_bytes-2) % 4] = Serial.read();
	rx_bytes++;

	if(rx_bytes < rx_point_count * 4 + 2)
		return 0;

	// end of frame
	rx_bytes = 0;
	point_count = rx_point_count;

	// swap rx and draw buf
	unsigned tmp = rx_buf;
	rx_buf = draw_buf;
	draw_buf = tmp;

	return 1;
}


void loop()
{
	static uint8_t timing_bit;
	digitalWrite(TIMING_PIN, timing_bit ^= 1);
#if 1
	for (unsigned i = 0 ; i < point_count; i++)
	{
		const uint8_t * const p = points[draw_buf][i];
		line(p[0], p[1], p[2], p[3]);

		for (int j = 0 ; Serial.available() && j < 8 ; j++)
		{
			if (read_bytes())
			{
				i = 0;
				break;
			}
		}
	}
#else
	if (cs == 100)
	{
		cs = 0;
		if (sec == 59)
		{
			sec = 0;
			if (min == 59)
			{
				min = 0;
				if (hour == 23)
					hour = 0;
				else
					hour++;
			} else {
				min++;
			}
		} else {
			sec++;
		}
	} else {
		cs++;
	}

	clock_loop(hour, min, sec, cs);
#endif
	
}
