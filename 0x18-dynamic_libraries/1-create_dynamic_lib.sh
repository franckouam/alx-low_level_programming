#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o liball -fPIC *.o
