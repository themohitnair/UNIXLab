//Write a Program to demonstrate race condition. 

#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

void charatatime(char* str) {
    char c;
    char* ptr;
    setbuf(stdout, NULL);
    for(ptr = str; (c = *ptr++); ) {
        putc(c, stdout);
    }
}

int main(void) {
    pid_t pid;
    if((pid = fork()) < 0) {
        cout<<"Fork error";
        exit(EXIT_FAILURE);
    }
    if(pid > 0) {
        charatatime("PARENT WRITING TO TERMINAL.");
    }
    if(pid == 0) {
        charatatime("child writing to terminal.");
    }

}