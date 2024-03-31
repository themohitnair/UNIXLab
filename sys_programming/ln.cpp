//Write a C/C++ program to implement UNIX ln command using APIs.

#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=3) {
        cout<<"Usage : ./<executable> <filename> <link_filename>"<<endl;
        exit(EXIT_FAILURE);
    }
    if(link(argv[1], argv[2]) == -1) {
        cerr<<"Link error.\n"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"File linked successfully. Link file name is "<<argv[2]<<"."<<endl;
    return 0;
}