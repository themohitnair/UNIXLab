//Write a program to implement UNIX system (), using APIs.

#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<iostream>
using namespace std;

int status;
int system(const char* cmd) {
    pid_t pid;
    if (cmd == NULL) {
        return 1;
    }
    if((pid = fork()) < 0) {
        status = -1;
    }
    
}