/** \file
 * Approximate sin function.
 * theta goes from 0 == 0 Pi to 255 == 2 Pi
 */
#ifndef _sin_table_h_
#define _sin_table_h_

#include <stdint.h>

extern int8_t sin_lookup(uint8_t theta);

static inline int8_t
cos_lookup(
	uint8_t theta
)
{
	return sin_lookup(theta + 64);
}


#endif
