//Write a C/C++ program to implement UNIX rm command using APIs

#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=2) {
        cout<<"Usage: ./<executable> <filename>"<<endl;
        exit(EXIT_FAILURE);
    }
    if(unlink(argv[1]) == -1) {
        cerr<<"Unlink error. "<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"File "<<argv[1]<<" deleted successfully. "<<endl;
    return 0;
}