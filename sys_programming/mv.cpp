//Write a C/C++ program to implement UNIX mv command using APIs.

#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=3) {
        cout<<"Usage: ./<executable> <source_filename> <dest_filename>"<<endl;
        exit(EXIT_FAILURE);
    }
    if(link(argv[1], argv[2]) == -1) {
        cerr<<"Link error. "<<endl;
        exit(EXIT_FAILURE);
    }
    if(unlink(argv[1]) == -1) {
        cerr<<"Unlink error. "<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"Rename successful. New file name is "<<argv[2]<<endl;
    return 0;
}