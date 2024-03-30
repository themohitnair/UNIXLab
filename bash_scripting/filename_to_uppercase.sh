#!/bin/bash

# Write a shell program that accepts one or more file names as arguments and converts all of them to uppercase, provided they exist in the current directory. 

if [ $# -lt 1 ]; then
    echo -e "Usage: sh <bash filename> <filename1> <filename2> <filename3> ... <filenamen>\n" 
    exit 1
fi

for var in $*; do
    if [ ! -e $var ]; then
        echo "File $var does not exist in the current directory. "
        continue
    fi

    newname=$(echo $var | tr [a-z] [A-Z])
    mv $var $newname
done