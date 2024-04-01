//Program creates, writes to, and reads from a pipe.

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<iostream>
using namespace std;

int main() {
    int pfds[2];
    int buf[10];
    if(pipe(pfds) == -1) {
        cerr<<"pipe error\n";
        exit(EXIT_FAILURE);
    }
    write(pfds[1], "test\n", 5);
    read(pfds[0], buf, 5);
    printf("%s", buf);
    return 0;
}