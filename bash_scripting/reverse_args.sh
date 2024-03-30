#!/bin/bash

# Write a shell program to prints the arguments in reverse order

if [ $# -lt 1 ]; then
    echo "Usage: sh <bash_filename> <arg1> <arg2> <arg3> ... <argn>"
    exit 1
fi

rev=""
for var in $*; do
    rev="$var $rev"
done

echo -e "Arguments: $*\nReversed Arguments: $rev"
