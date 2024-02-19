#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<errno.h>
#include<unistd.h>
using namespace std;

int main(){
    int pfds[2];
    char buf[30];
    if(pipe(pfds) == -1){
        cerr<<"pipe error"<<endl;
        exit(0);
    }
    cout<<"writing to file descriptor "<<pfds[1]<<endl;
    write(pfds[1], "test", 5);
    cout<<"reading from file descriptor "<<pfds[0]<<endl;
    read(pfds[0],buf,5);
    cout<<"read: "<<buf<<endl;
    return 0;
}