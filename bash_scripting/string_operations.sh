#!/bin/bash

# Write a shell program to do the followings on strings, find length of a string, whether string is NULL, and two strings are equal or not. 

read -p "Enter string 1: " str1
read -p "Enter string 2: " str2

if [ "$str1" = "$str2" ]; then
    echo "The two strings are equal."
else
    echo "The two strings are not equal."
fi

if [ -z "$str1" ]; then
    echo "String 1 is NULL"
else
    echo "String 1 has length ${#str1}. "
fi

if [ -z "$str2" ]; then
    echo "String 2 is NULL"
else
    echo "String 2 has length ${#str2}. "
fi