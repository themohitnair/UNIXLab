#include<stdio.h>
#include<sys/types.h>
#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
using namespace std;

int main(int argc, char* argv[]){
    int n, fd1, fd2;
    char buf[10];
    if(argc!=3){
        cerr<<"error: incorrect usage"<<endl;
        exit(0);
    }
    if((fd1 = open(argv[1],O_RDONLY))==-1){
        cerr<<"error: unable to open file "<<argv[1]<<" for reading."<<endl;
        exit(0);
    }
    if((fd2 = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC, 0744))==-1){
        cerr<<"error: unable to open file "<<argv[1]<<" for reading."<<endl;
        exit(0);
    }
    while((n=read(fd1,buf,1))>0){
        write(1,buf,n);
        write(fd2,buf,n);
        
    }
    close(fd1);
    close(fd2);
}