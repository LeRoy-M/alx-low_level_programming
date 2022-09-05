#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
ranlib liball.so
