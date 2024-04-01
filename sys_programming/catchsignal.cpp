//Write a C++ program to catch, ignore or accept a signal
//Catching a signal (custom)

#include<iostream>
#include<stdlib.h>
#include<signal.h>
using namespace std;

void handler(int signo) {
    cout<<"Caught signal. Signal number = "<<signo<<endl;
    exit(0);
}

int main() {
    signal(SIGINT, handler);
    while(1) {
        cout<<"i use arch btw"<<endl;
    }
}

