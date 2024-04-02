//Write a C program to demonstrate a parent process that uses wait ( ) system call to catch the child ’s exit code.

#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;


void pr_exit(int status) {
    if (WIFEXITED(status)) {
        cout<<"Normal termination. Exit status = "<<WEXITSTATUS(status)<<endl;
    }
    if (WIFSTOPPED(status)) {
        cout<<"Child stopped. Signal number = "<<WSTOPSIG(status)<<endl;
    }
    if (WIFSIGNALED(status)) {
        cout<<"Abnormal Termination. Signal number = "<<WTERMSIG(status)<<endl;
    }
}

int main(void) {
    pid_t pid, childpid;
    int status;

    
    if((pid = fork()) < 0) {
        cout<<"Fork error\n";
        exit(EXIT_FAILURE);
    }
    if(pid == 0) {
        exit(23);
    }
    childpid = wait(&status);
    pr_exit(status);


    if((pid = fork()) < 0) {
        cout<<"Fork error\n";
        exit(EXIT_FAILURE);
    }
    if(pid == 0) {
        abort();
    }
    childpid = wait(&status);
    pr_exit(status);

     
    if((pid = fork()) < 0) {
        cout<<"Fork error\n";
        exit(EXIT_FAILURE);
    }
    if(pid == 0) {
        int res = 5/0;
    }
    childpid = wait(&status);
    pr_exit(status);
}