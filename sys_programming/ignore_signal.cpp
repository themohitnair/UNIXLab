//Write a C++ program to catch, ignore or accept a signal
//Ignoring a signal

#include<signal.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    signal(SIGINT, SIG_IGN);
    while(1) {
        cout<<"i use arch btw"<<endl;
    }
}

