//Write a C program to display information of a given file which determines type of file and Inode information, where the file name is given as command line argument.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<iostream>
#include<unistd.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=2) {
        cout<<"Usage: ./<executable> <filename1>"<<endl;
        exit(EXIT_FAILURE);
    }
    struct stat sb;
    if(stat(argv[1], &sb) == -1) {
        cerr<<"Stat error\n"<<endl;
        exit(EXIT_FAILURE);
    }
    switch(sb.st_mode & S_IFMT) {
        case S_IFBLK:
            cout<<"File is a block device file. "<<endl;
            break;
        case S_IFCHR:
            cout<<"File is a character device file. "<<endl;
            break;
        case S_IFDIR:
            cout<<"File is a directory. "<<endl;
            break;
        case S_IFIFO:
            cout<<"File is a FIFO (pipe) file. "<<endl;
            break;
        case S_IFLNK:
            cout<<"File is a symbolic link. "<<endl;
            break;
        case S_IFSOCK:
            cout<<"File is a socket. "<<endl;
            break;
        default:
            cout<<"File type is unknown. "<<endl;
    }
    cout<<"The inode number of the given file is: "<<sb.st_ino<<endl;
}