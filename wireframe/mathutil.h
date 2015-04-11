/** \file
 * Math utility functions
 */
#ifndef _mathutil_h_
#define _mathutil_h_

#include <stdint.h>

static inline int32_t
abs(
	int32_t x
)
{
	if (x < 0)
		return -x;
	return x;
}


static inline uint32_t
limit(
	int32_t x,
	int32_t min,
	int32_t max
)
{
	if (x < min)
		return min;
	if (x > max)
		return max;
	return x;
}


#endif
