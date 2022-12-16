#!/bin/bash
gcc -Wall -Wextra -Wextra -Werror -pedantic -c -fPIC *.C
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
