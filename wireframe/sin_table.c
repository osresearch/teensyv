#include "sin_table.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


static const uint8_t sin_table[] = {
	0,
	25,
	50,
	74,
	98,
	121,
	142,
	162,
	181,
	198,
	213,
	226,
	237,
	245,
	251,
	255,
	255 // duplicate to avoid extra code for handling last case
};

int8_t
sin_lookup(
	uint8_t theta
)
{
	int sign = 1;

	if (theta < 64)
	{
		// q1, upward slope, normal theta, positive sign
	} else
	if (theta < 128)
	{
		theta = 128 - theta; // downward slope, still positive
	} else
	if (theta < 192)
	{
		// q3, downward slope, negative side
		theta = theta - 128;
		sign = -1;
	} else
	{
		// q4, upward slope, negative side
		theta = 256 - theta;
		sign = -1;
	}

	int16_t s1 = sin_table[(theta >> 2) + 0];
	int16_t s2 = sin_table[(theta >> 2) + 1];
	int8_t result = (s1 + ((s2 - s1) * (theta & 0x3)) / 4) / 2;

	if (sign == -1)
		return -result;
	else
		return result;
}


#if 0
int main(void)
{
	unsigned theta;

	for (theta = 0 ; theta < 0x100 ; theta++)
	{
		double sx = sin_lookup(theta) / 128.0;
		double sf = sin(theta * 2 * M_PI / 256.0);
		double cx = cos_lookup(theta) / 128.0;
		double cf = cos(theta * 2 * M_PI / 256.0);

		printf("%.4f %.4f %.4f\n",
			cx,
			cf,
			cf - cx
		);
	}
}
#endif
