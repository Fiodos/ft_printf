#!/bin/bash

FLAGS="-Wall -Wextra -Werror"
FILE="main.c"
LIB="../libftprintf.a"

gcc $FLAGS $FILE $LIB
./a.out
diff -u a1 a2 > result.diff
if [ -s result.diff ]; then
		echo "KO"
		wc -l < result.diff
else
		echo "OK"
		#rm result.diff
fi
