#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
using namespace std;

int main(int argc, char* argv[]){
    if(argc<=1) {
        cerr<<"error: incorrect usage"<<endl;
        exit(0);
    }
    for(int i = 1; i < argc; i++){
        if(unlink(argv[i])==-1){
            cerr<<"error: unable to unlink "<<argv[i]<<endl;
        }
    }
}