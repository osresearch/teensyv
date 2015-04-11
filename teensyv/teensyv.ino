#include "vector.h"
#include "clock.h"

void setup()
{
	vector_setup();
}

static uint8_t sec;
static uint8_t min;
static uint8_t hour;

void loop()
{
	if (sec == 59)
	{
		sec = 0;
		if (min == 59)
		{
			min = 0;
			if (hour == 23)
				hour = 0;
		}
	}

	clock_loop(hour, min, sec);
}
