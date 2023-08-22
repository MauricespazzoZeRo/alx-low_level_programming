#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o
