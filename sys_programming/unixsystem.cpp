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
    else if(pid == 0) {
        execl("/bin/sh", "sh", "-c", cmd, (char*) 0);
        _exit(127);
    }
    else {
        while(waitpid(pid, &status, 0) < 0) {
            if(errno != EINTR) {
                status = -1;
                break;
            }
        }

    }
    return status;
}

int main(void) {
    if ((status = system("date")) < 0 || (status = system("who; exit 44")) || (status = system("daate"))) {
        cout<<"Error"<<endl;
    }
}

