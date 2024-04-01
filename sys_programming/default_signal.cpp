////Write a C++ program to catch, ignore or accept a signal
//Accepting a signal (default) 

#include<signal.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() {
    signal(SIGINT, SIG_DFL);
    while(1) {
        cout<<"i use arch btw"<<endl;
    }
}
