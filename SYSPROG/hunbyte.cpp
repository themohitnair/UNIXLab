#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=2){
        cerr<<"error: incorrect usage"<<endl;
        exit(0);
    }
    int fd, skval, n;
    char c;
    if((fd=open(argv[1],O_RDONLY))==-1){
        cerr<<"error: unable to open file "<<argv[1]<<endl;
        exit(0);
    }
    while((n=read(fd,&c,1))>0) {
        cout<<"character read: "<<c<<endl;
        cout<<"seek value: "<<lseek(fd,99,1)<<endl;
    }
    close(fd);
}