#include <stdio.h>
#include <unistd.h>
#include<sys/wait.h>

int main()
{
    pid_t w,x,y,z;
    w = getpid();
    int pid = fork();
    x = getpid();
    if( pid > 0 )
    {
        fork();
        y = getpid();
        if(y == w ){
            wait(NULL);
        printf("This is process W, my grandparent with pid = %d\n",w);
        }
        else{
            printf("This is process Y, my uncle with pid = %d\n",y);
            sleep(5);
        }
        wait(NULL);
    }
    else
    {
        fork();
        z = getpid();
        if( x==z ){
            wait(NULL);
            printf("This is process X, my parent with pid = %d\n",x);  
        }
        else
            printf("Welcome to CEF488. I am process Z, the grandchild with pid = %d\n",z);
    }
    return(0);
}