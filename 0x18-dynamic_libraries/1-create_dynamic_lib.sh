#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c -o putchar.o

gcc -shared -o liball.so *.o
