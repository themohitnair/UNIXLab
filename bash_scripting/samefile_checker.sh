#!/bin/bash

# Write a shell program which takes two file names as arguments, if their contents are the same then remove the second file.

clear
if [ $# -ne 2 ]; then
    echo -e "Usage: sh <bash filename> <filename1> <filename2>\n"
    exit 1
fi

if [ ! -e $1 ]; then
    echo "File $1 does not exist in the current directory. "
    exit 1
elif [ ! -e $2 ]; then
    echo "File $2 does not exist in the current directory. "
    exit 1
fi

diff $1 $2>/dev/null


if [ $? -eq 0 ]; then
    echo "File contents are identical. Deleting second file. "
    rm $2
else
    echo "File contents are not identical. No changes made. "
fi