#!/bin/bash

# Write a shell program to search the given key element using linear search.

arr=()
read -p "Enter the number of elements in the array: " num

for ((i=0;i<num;i++)); do
    read -p "Enter element $((i+1)): " arr[i]
done

read -p "Enter the element to be searched: " ele

flag=0
for ((i=0;i<num;i++)); do
    if [ ${arr[i]} -eq $ele ]; then
        flag=1
        break
    fi
done

if [ $flag -eq 0 ]; then
    echo "Element not found!"
else
    echo "Element found at position $i"
fi