#!/bin/bash

# Write a shell program that takes a command line argument and reports on whether it is directory, a file, or something else.

if [ $# -ne 1 ]; then
    echo -e "Usage: sh <bash filename> <filename1>\n"
    exit 1
fi

if [ -e $1 ]; then
    echo -n "File exists and is a "
else
    echo "File does not exist in the current directory. "
    exit 1
fi

if [ -f $1 ]; then
    echo "regular file. "
elif [ -d $1 ]; then
    echo "directory. "
elif [ -b $1 ]; then
    echo "block device file. "
elif [ -c $1 ]; then
    echo "character device file. "
elif [ -S $1 ]; then
    echo "socket. "
elif [ -L $1 ]; then 
    echo "symbolic link file. "
elif [ -p $1 ]; then
    echo "pipe (FIFO) file. "
else
    echo "unknown. "
fi