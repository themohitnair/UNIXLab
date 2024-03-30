#!/bin/bash

# Write a shell program to print the given number in reversed order.

read -p "Enter the number: " num
temp=$num
rev=0

while [ $num -gt 0 ]; do
    d=$((num%10))
    rev=$((rev*10+d))
    num=$((num/10))
done

echo -e "Original number: $temp\nReversed number: $rev"
