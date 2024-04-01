//Program to create a pipe from the parent to child and send data down the pipe.

#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<iostream>
using namespace std;

int main(void) {
    int pfds[2];
    char buf[10];
    pid_t pid;
    int n;
    if (pipe(pfds) == -1) {
        cout<<"Pipe error."<<endl;
        exit(EXIT_FAILURE);        
    }
    if((pid = fork()) < 0) {
        cout<<"Fork error."<<endl;
        exit(EXIT_FAILURE);
    }
    if(pid > 0)     {
        close(pfds[0]);
        write(pfds[1], "hello", 6);
    }
    if(pid == 0){
        close(pfds[1]);
        n = read(pfds[0], buf, 6);
        write(1, buf, n);
        write(1, "\n", 1);
    }
}