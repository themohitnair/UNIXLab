#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main() {
    pid_t pid;
    pid = fork();
    if(pid<0){
        cerr<<"fork error "<<endl;
        exit(0);
    }
    if(pid==0){
        sleep(5);
        cout<<"child process ID: "<<getpid()<<endl;
        cout<<"orphan parent process ID: "<<getppid()<<endl;
    }
    if(pid>0){
        cout<<"parent process ID: "<<getpid()<<endl;
    }
}