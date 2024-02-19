#include<stdio.h>
#include<unistd.h>
#include<iostream>
#include<signal.h>
using namespace std;

int main(void) {
    signal(SIGINT, SIG_IGN);
    while(1) {
        cout<<"hello\t";
    }
}