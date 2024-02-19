#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(){
    pid_t pid;
    pid = fork();
    if(pid<0){
        cerr<<"fork error"<<endl;
        exit(0);
    }
    if(pid==0){
        cout<<"child process: "<<getpid()<<endl;
        cout<<"parent process: "<<getppid()<<endl;
    }
    if(pid>0){
        cout<<"original process: "<<getpid()<<endl;
        cout<<"parent process: "<<getppid()<<endl;
    }
}