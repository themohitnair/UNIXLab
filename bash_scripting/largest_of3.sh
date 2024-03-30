#!/bin/bash

# Write a shell program to find the largest of three numbers using a function.

maxof3() {
    if [ $# -ne 3 ]; then
        echo -e "Usage: maxof3 <arg1> <arg2> <arg3>\n"
        exit 1
    fi

    max=$1
    if [ $2 -gt $max ]; then
        max=$2
    fi
    if [ $3 -gt $max ]; then
        max=$3
    fi

    echo $max
}

read -p "Enter the first number: " n1
read -p "Enter the second number: " n2
read -p "Enter the third number: " n3

echo "The largest of the three numbers is $(maxof3 $n1 $n2 $n3)."