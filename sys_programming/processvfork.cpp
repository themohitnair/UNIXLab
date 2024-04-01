//Write a C program to create a process by using fork() and vfork() system call

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main() {
    pid_t pid;
    cout<<"Original process: "<<getpid()<<endl<<"Parent process: "<<getppid()<<endl;

    pid = vfork();
    if(pid < 0) {
        cout<<"Fork error\n"<<endl;
        exit(EXIT_FAILURE);
    }
    if(pid > 0) {
        cout<<"Original process: "<<getpid()<<endl<<"Parent process: "<<getppid()<<endl;
    }
    if(pid == 0) {
        cout<<"Child process: "<<getpid()<<endl<<"Parent process: "<<getppid()<<endl;
    }
    cout<<"End of main"<<endl;
    return 0;
}