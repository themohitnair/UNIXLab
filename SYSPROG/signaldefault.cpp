#include<iostream>
#include<unistd.h>
#include<signal.h>
using namespace std;

int main(void){
    signal(SIGINT, SIG_DFL);
    while(1){
        cout<<"hello\t";
    }
}