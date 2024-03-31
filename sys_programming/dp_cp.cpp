//Write a program in C/C++ to display the contents of a named file on standard output device. Also Write a program to copy the contents of one file to another.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc!=3) {
        cout<<"Usage: ./<executable> <filename1> <filename2>\n"<<endl;
        exit(EXIT_FAILURE);
    }
    int fd1, fd2, n;
    char buf[10];
    if((fd1=open(argv[1],O_RDONLY)) == -1) {
        cout<<"Unable to open file "<<argv[1]<<" for reading."<<endl;
        exit(EXIT_FAILURE);
    }
    if((fd2=open(argv[2], O_WRONLY|O_TRUNC|O_CREAT, 0744)) == -1) {
        cout<<"Unable to open file "<<argv[2]<<" for writing."<<endl;
        exit(EXIT_FAILURE);
    }
    while((n = read(fd1,buf,1)) > 0) {
        write(fd2, buf, n);
        write(1, buf, n);        
    }
    write(1, "\n", 1);
    close(fd1);
    close(fd2);
}