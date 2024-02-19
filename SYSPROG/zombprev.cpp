#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main(){
    pid_t pid;
    int status;
    pid = fork();
    if(pid<0){
        cerr<<"fork error"<<endl;
        exit(0);
    }
    if(pid == 0){
        cout<<"child process ID: "<<getpid()<<endl;
        exit(0);
    }
    if(pid > 0) {        
        sleep(5);
        wait(&status);
        cout<<"parent process ID: "<<getpid()<<endl;
        system("ps u");
    }
}