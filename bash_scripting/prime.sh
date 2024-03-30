#!/bin/bash

# Write a shell program to print the prime numbers between the specified range 

read -p "Enter the beginning of the range: " beg
read -p "Enter the end of the range: " end
prime=""

for var in $(seq $beg $end); do
    flag=0

    for div in $(seq 2 $((var/2))); do
        if [ $((var%div)) -eq 0 ]; then
            flag=1
            break
        fi
    done
    
    if [ $var -eq 0 ] || [ $var -eq 1 ]; then
        flag=1
    fi
    
    if [ $flag -eq 0 ]; then
        prime="$prime $var"
    fi
done

echo -e "The primes between $beg and $end (inclusive) are:\n$prime"