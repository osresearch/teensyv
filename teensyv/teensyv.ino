#include "vector.h"
#include "clock.h"
#include "sin_table.h"

void setup()
{
	vector_setup();
}

static uint8_t sec;
static uint8_t min;
static uint8_t hour;

void loop()
{
#if 0
	uint8_t x = 0;
	while(1)
	{
		GPIOD_PDOR = cos_lookup(x++) + 128;
		GPIOC_PDOR = cos_lookup(x+90) + 128;
	}
#else
	if (sec == 59)
	{
		sec = 0;
		if (min == 59)
		{
			min = 0;
			if (hour == 23)
				hour = 0;
		}
	} else {
		sec++;
	}

	clock_loop(hour, min, sec);
#endif
	
}
