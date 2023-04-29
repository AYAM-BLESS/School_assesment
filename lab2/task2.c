#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int n;
    int pid = fork();
    for (n=11; n<=20; n++){
        if (pid != 0){
            if (n>=16 && n<=20)
            
            printf(" %d ", n);
            wait(NULL);
        }
        else if (n<=15){
            printf(" %d ", n);
        }
    }
}