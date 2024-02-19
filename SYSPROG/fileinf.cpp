#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<time.h>
using namespace std;

int main(int argc, char* argv[]){
    struct stat sb;
    if(argc!=2){
        cerr<<"error: incorrect usage"<<endl;
    }
    if(stat(argv[1],&sb)==-1){
        cerr<<"error: unable to obtain file stat"<<endl;
        exit(0);
    }
    switch(sb.st_mode & S_IFMT){
        case S_IFLNK:
        cout<<"Link"<<endl;
        break;
        case S_IFREG:
        cout<<"Regular"<<endl;
        break;
        case S_IFBLK:
        cout<<"Block device"<<endl;
        break;
        case S_IFCHR:
        cout<<"Character device"<<endl;
        break;
        case S_IFDIR:
        cout<<"Directory"<<endl;
        break;
        case S_IFIFO:
        cout<<"FIFO/Pipe"<<endl;
        break;
        case S_IFSOCK:
        cout<<"Socket"<<endl;
        break;
        default:
        cout<<"Unknown file"<<endl;
    }
    cout<<"Inode number: "<<sb.st_ino<<endl;
}