#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

void charatatime(char* str){
    char* ptr;
    int c;
    setbuf(stdout, NULL);
    for(ptr = str; (c = *ptr++) != 0;) {
        putc(c,stdout);
    }
}

int main(int argc, char* argv[]){
    pid_t pid = fork();
    if(pid<0){
        cerr<<"fork error"<<endl;
        return 0;
    }
    if(pid == 0) {
        cout<<"Child writing..."<<endl;
    }
    if(pid > 0) {
        cout<<"Parent writing..."<<endl;
    }
}