#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid;
    pid = fork();
if(pid < 0 )
{
    printf("\n Error");
    exit(1);
}
else if(pid != 0 )
{
    printf("Welcome to CEF488 from parent process \n");
    exit(0);
}
else {
    printf("Welcome to CEF488 from child process \n");
    exit(1);
}
//printf("Program is exited without executing this line");
//return 0;
}
