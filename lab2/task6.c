#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid;
    pid = fork();

if(pid == 0 )
{
     sleep(5);
    printf("Welcome to CEF488 from child\n");
   
    exit(0);
}
else if(pid > 0){
    wait(NULL);
    printf("Welcome to CEF488 from parent\n");
    
    exit(1);
}
//if(pid < 0 )
else
{
    printf("\n Error");
    exit(1);
}
return 0;
}
