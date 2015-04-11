Teensy 3.1 Vector Display
===

The builds on the work done with the Teensy 2 vector display, but updates
it to use the much faster Teensy 3.1 to allow more lines to be drawn.
It also ports it from "native code" to something that can be built in
the Arduino environment to make it easy for others to use.

There are 12 pins in C and 8 pins in D available:

    C0 15
    C1 22
    C2 23
    C3 9
    C4 10
    C5 13 (also the LED, which will need to be removed)
    C6 11
    C7 12
    C8 28 (on bottom)
    C9 27 (on bottom)
    C10 29 (on bottom)
    C11 30 (on bottom)

    D0 2
    D1 14
    D2 7
    D3 8
    D4 6
    D5 20
    D6 21
    D7 5

The contiguous port mapping is important so that there is 
single-cycle access to write the values to the port and so that the
new bits are on the R2R DAC simultaneously.  Otherwise it will
glitch quite badly.


