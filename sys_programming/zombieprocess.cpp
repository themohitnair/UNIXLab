//Write a program to demonstrate the process is Zombie, and to avoid Zombie process. Write a program that creates a zombie and then call system to execute the PS Command to verify that the process is Zombie.

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main(void) {
    pid_t pid;
    if((pid=fork()) < 0) {
        cout<<"Fork error\n"<<endl;
        exit(EXIT_FAILURE);
    }
    if((pid=fork()) == 0) {
        cout<<"Child process ID: "<<getpid()<<endl;
        cout<<"Waiting for exit status to be read by parent process. "<<endl;
        exit(0);
    }
    if((pid=fork()) > 0) {
        cout<<"Parent process ID: "<<getpid()<<endl;
        sleep(5);
        system("ps u");
    }
    return 0;
}