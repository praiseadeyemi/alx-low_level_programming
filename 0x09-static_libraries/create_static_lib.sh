#!/bin/bash

#Create object code from the .c extension

for file in *.c; do
	gcc -c "$file" -o "${file%.c}.o"
done

#Create library file
ar rcs liball.a *.o
