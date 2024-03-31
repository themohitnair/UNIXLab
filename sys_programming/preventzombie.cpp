//Program to avoid zombie using wait and then call system to execute the PS Command to verify that the process is Zombie or not.

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;

int main() {
    pid_t pid;
    int status;
    if((pid = fork()) < 0) {
        cout<<"Fork error.\n"<<endl;
        exit(EXIT_FAILURE);
    }
    if((pid=fork()) > 0) {        
        sleep(5);
        wait(&status);
        cout<<"Parent ID: "<<getpid()<<endl;
        system("ps u");
    }
    if((pid=fork()) == 0) {
        cout<<"Child ID: "<<getpid()<<endl;
        cout<<"Waiting for parent to retrive exit status of child..."<<endl;
        exit(0);
    }
    return 0;
}