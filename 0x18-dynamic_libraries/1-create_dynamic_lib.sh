#!/bin/bash
gcc -c -fPIC *.c
ar -rc liball.so *.o
ranlib liball.so
