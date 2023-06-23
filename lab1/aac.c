#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int id;
    id = fork();
    printf("Welcome to CEF488 id = %d \n", id);
    return 0;
}