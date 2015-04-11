#include "vector.h"
#include "clock.h"
#include "sin_table.h"

void setup()
{
	vector_setup();
}

static uint8_t cs;
static uint8_t sec;
static uint8_t min;
static uint8_t hour;

static const uint8_t points[][4] = {
	{ 0, 0, 0, 250 },
	{ 250, 250, 250, 0 },
	{ 0, 250, 250, 250 },
	{ 250, 0, 0, 0 },
	{ 127, 250, 0, 0 },
	{ 0, 0, 250, 127 },
	{ 0, 0, 250, 250 },
};

void loop()
{
#if 1
	for (unsigned i = 0 ; i < sizeof(points)/sizeof(*points); i++)
	{
		const uint8_t * const p = points[i];
		//GPIOD_PDOR = p[0];
		//GPIOC_PDOR = p[1];
		//delayMicroseconds(5);
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
