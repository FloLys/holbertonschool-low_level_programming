#!/bin/bash
gcc -c -fPIC *.c | gcc -shared -o liball.so *.o | gcc -L. 0-main.c -lall | export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
