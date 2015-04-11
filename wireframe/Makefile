SRCS += teatime.c
SRCS += draw.c
SRCS += camera.c
SRCS += sin_table.c
SRCS += wireframe.c

#include ../Makefile.rules

cube: $(SRCS)
	$(CC) -std=c99 -g -O3 -Wall -o $@ $^


teapot.h: teapot.off off-reduce
	./off-reduce teapot.off > teapot.h

