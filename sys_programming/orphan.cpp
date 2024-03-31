//Write a C program to create an Orphan Process.

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;

int main() {
    pid_t pid;
    if((pid=fork()) < 0) {
        cout<<"Fork error. "<<endl;
        exit(EXIT_FAILURE);
    }
    if((pid=fork()) > 0) {
        cout<<"Parent process ID: "<<getpid()<<endl;
        exit(0);
    }
    if((pid=fork()) == 0) {
        sleep(5);
        cout<<"Child process ID: "<<getpid()<<endl;
        cout<<"Orphan's parent: "<<getppid()<<endl;
    }
    return 0;
}