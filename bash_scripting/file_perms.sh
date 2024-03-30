#!/bin/bash

# Write a shell script that accepts two file names as arguments, checks if the permissions for these files are identical and if the permissions are identical, output common permission and otherwise output each file name followed by its permissions.

if [ $# -ne 2 ]; then
    echo -e "Usage: sh <bash filename> <filename1>\n"
    exit 1
fi

if [ ! -e $1 ] || [ ! -e $2 ]; then
    echo -e "Either $1 or $2 or both files do not exist in the current directory.\n"
    exit 1
fi

perms1=$(stat -c "%A" $1)
perms2=$(stat -c "%A" $2)

if [ "$perms1" = "$perms2" ]; then
    echo "The two files have identical permissions. "
    echo "Common permissions: $perms1"
else
    echo "The two files do not have identical permissions. "
    echo "Permissions of $1: $perms1"
    echo "Permissions of $2: $perms2"
fi
