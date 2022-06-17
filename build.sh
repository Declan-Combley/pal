#!/bin/sh

set -x

FLAGS="-Wall -Wextra"
BIN="pal"

gcc -o $BIN main.c $FLAGS
