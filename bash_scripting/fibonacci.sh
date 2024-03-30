#!/bin/bash

# Write a shell program to print the first 25 Fibonacci numbers. 

n1=0
n2=1
fib="$n1 $n2"

count=23

while [ $count -gt 0 ]; do
    f=$((n1+n2))
    fib="$fib $f"
    n1=$n2
    n2=$f
    count=$((count-1))
done

echo -e "The first 25 fibonacci numbers are: \n$fib"