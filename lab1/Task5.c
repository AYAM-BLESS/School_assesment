#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    fork();
    fork();
    fork();
    printf("Welcome to CEF488 \n");
}