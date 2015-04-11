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
static uint8_t points[MAX_POINTS][4] = {
	{ 0, 0, 255, 0 },
	{ 255, 0, 255, 255 },
	{ 255, 255, 0, 255 },
	{ 0, 255, 0, 0 },
};

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


/** Blocking serial read.
 * While waiting for bytes, move the beam around to avoid a hot spot
 */
static uint8_t
read_byte(void)
{
	static uint8_t spin_count = 0;

	while(1)
	{
		if (Serial.available())
		{
			const int c = Serial.read();
			if (c != -1)
				return c;
		}

		spin_count++;
		GPIOD_PDOR = spin_count & 2 ? 255 : 0;
		GPIOC_PDOR = spin_count & 1 ? 255 : 0;
	}
}


void
read_frame(void)
{
	point_count = read_byte();
	point_count = point_count << 8 | read_byte();

	for (unsigned i = 0 ; i < point_count ; i++)
	{
		uint8_t * const p = points[i];
		p[0] = read_byte();
		p[1] = read_byte();
		p[2] = read_byte();
		p[3] = read_byte();
	}
}


void loop()
{
	static uint8_t timing_bit;
	digitalWrite(TIMING_PIN, timing_bit ^= 1);
	if (Serial.available())
		read_frame();

#if 1
	for (unsigned i = 0 ; i < point_count; i++)
	{
		const uint8_t * const p = points[i];
		line(p[0], p[1], p[2], p[3]);
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
