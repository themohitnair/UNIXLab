#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=3) {
        cerr<<"error: incorrect usage"<<endl;
        exit(0);
    }
    if(link(argv[1], argv[2])==-1){
        cerr<<"error: unable to link"<<endl;
        exit(0);
    }
    if(unlink(argv[1])==-1){
        cerr<<"error: unable to unlink"<<endl;
        exit(0);
    }
}