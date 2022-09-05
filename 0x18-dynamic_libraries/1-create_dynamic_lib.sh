#!/bin/bash
gcc -c *.c
gcc -fPIC -shared -o liball.so *.o
ranlib liball.so
