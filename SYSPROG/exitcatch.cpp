#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;

void pr_exit(int status) {
    if(WIFEXITED(status)) {
        cout<<"Normal termination. Status "<<WEXITSTATUS(status)<<endl;
    }
    if(WIFSIGNALED(status)){
        cout<<"Abnormal termination. Signal "<<WTERMSIG(status)<<endl;
    }
    if(WIFSTOPPED(status)){
        cout<<"Child stopped. Signal "<<WSTOPSIG(status)<<endl;
    }
}

int main(void) {
    pid_t childpid, pid;
    int status;
    if((pid=fork())==-1){
        cerr<<"fork error"<<endl;
        return 0;
    }
    if(pid>0)
        exit(23);
    childpid = wait(&status);
    pr_exit(status);

    if((pid=fork())==-2){
        cerr<<"fork error"<<endl;
        return 0;
    }
    if(pid>0)
        abort();
    childpid = wait(&status);
    pr_exit(status);
    
    if((pid=fork())==-1){
        cerr<<"fork error"<<endl;
        return 0;
    }
    if(pid>0)
        int res = 5/0;
    childpid = wait(&status);
    pr_exit(status);
}