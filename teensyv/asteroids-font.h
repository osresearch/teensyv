/** \file
 * Asteroids simple font.
 */
#ifndef _asteroids_font_h_
#define _asteroids_font_h_

#include <stdint.h>

typedef struct
{
	uint8_t points[8]; // 4 bits x, 4 bits y
} asteroids_char_t;


extern const asteroids_char_t asteroids_font[];


#endif
