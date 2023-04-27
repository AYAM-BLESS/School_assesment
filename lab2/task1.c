#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid = fork();
    printf("Welcome to CEF488 pid = %d \n", pid);
}