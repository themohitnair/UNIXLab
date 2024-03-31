//Write a C program that reads every 100th byte from the file, where the file name is given as command -line argument

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=2) {
        cout<<"Usage: ./<executable> <filename>"<<endl;
        exit(EXIT_FAILURE);
    }
    int fd, n, skval;
    char c;
    if ((fd = open(argv[1], O_RDONLY)) == -1) {
        cerr<<"Unable to open file "<<argv[1]<<" for reading."<<endl;
        exit(EXIT_FAILURE);
    }
    while((n=read(fd, &c, 1)) > 0) {
        cout<<"Character read: "<<c<<endl;
        skval = lseek(fd, 99, 1);
        cout<<"Seek value: "<<skval<<endl;
    }
    close(fd);
}