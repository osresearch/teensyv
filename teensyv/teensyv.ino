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

static uint8_t serial_block()
{
	while(1)
	{
		int c = Serial.read();
		if (c == -1)
			continue;
		return c;
	}
}

void loop()
{
	static uint8_t timing_bit;
	digitalWrite(TIMING_PIN, timing_bit ^= 1);
	while (Serial.available())
	{
		uint8_t c = Serial.read();
		if (c == 'E')
		{
			point_count = 0;
			continue;
		}

		if (c == 'P')
		{
			uint8_t * const p = points[point_count];
			p[0] = serial_block();
			p[1] = serial_block();
			p[2] = serial_block();
			p[3] = serial_block();

			if (point_count < MAX_POINTS-1)
				point_count++;
			continue;
		}
	}

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
