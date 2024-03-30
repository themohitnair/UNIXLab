#!/bin/bash
# Write a shell program that creates a student database file which consists of sid, sname, ssem, dept. Display only Student Name, Department, and frequency of occurrences of students belonging to respective departments

read -p "Enter the number of records to be entered: " n
fields="USN,First_Name,Last_Name,Dept"
del=","
echo $fields > studentdatabase.csv

count=0
while [ $count -lt $n ]; do
    echo -e "#####-STUDENT $((count+1))-#####"
    read -p "Enter the first name of the student: " fname
    read -p "Enter the last name of the student: " lname
    read -p "Enter the USN of the student: " usn
    read -p "Enter the Department of the student: " dept
    echo -e "\n"

    record="$usn$del$fname$del$lname$del$dept"
    echo $record >> studentdatabase.csv
    
    count=$((count+1))
done

echo -e "\n"
cut -d"," -f 2,3,4 studentdatabase.csv | tr ',' ' ' | column -t

echo -e "\nn dept"
cut -d"," -f 4 <(sed '1d' studentdatabase.csv) | tr ',' ' ' | sort | uniq -c | column -t