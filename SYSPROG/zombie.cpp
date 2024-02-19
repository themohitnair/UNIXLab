#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
using namespace std;

int main(){
    pid_t pid;
    pid = fork();
    if(pid<0){
        cerr<<"fork error "<<endl;
        exit(0);
    }
    if(pid==0){
        cout<<"child process ID: "<<getpid()<<endl;
        cout<<"waiting to retrieve exit status from parent..."<<endl;
        exit(0);
    }
    if(pid>0){
        sleep(5);
        cout<<"parent process ID: "<<getpid()<<endl;
        system("ps u");
    }
}
