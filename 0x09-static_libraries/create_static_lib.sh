#!/bin/bash
for cfile in *.c; do
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c $cfile
done

for ofile in *.o; do
	ar rc liball.a $ofile
done
