/** \file
 * Allow cross compilation of code that uses AVR program memory spaces.
 */
#ifndef _memspaces_h_
#define _memspaces_h_

#ifdef __AVR__
#include <avr/pgmspace.h>
#else
#define PROGMEM /* Nop */
#define pgm_read_byte(p) *((const uint8_t*) p)
#endif

#endif
