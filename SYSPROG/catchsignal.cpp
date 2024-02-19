#include<signal.h>
#include<iostream>
#include<unistd.h>
using namespace std;

void handler(int signo){
    cout<<"signal number = "<<signo<<endl;
    exit(0);
}

int main(void){
    signal(SIGINT,handler);
    while(1) {
        cout<<"hello"<<endl;
    }
}

