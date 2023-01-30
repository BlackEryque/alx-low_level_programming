#!/bin/sh

#Convert c files into object files
gcc -c *.c

#Archive command
ar rc liball.a *.o
