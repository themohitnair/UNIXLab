#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/types.h>
using namespace std;

int main(void){
    int pfds[2], n;
    char buf[30];
    pid_t pid;

    if((pid=fork())==-1) {
        cerr<<"fork error"<<endl;
        exit(0);
    }
    if(pipe(pfds) == -1){
        cerr<<"pipe error"<<endl;
        exit(0);
    }
    if(pid>0){
        close(pfds[0]);
        write(pfds[1],"hello\n",7);
    }
    if(pid==0){
        close(pfds[1]);
        n = read(pfds[0],buf,7);
        write(1,buf,n);
    }
}