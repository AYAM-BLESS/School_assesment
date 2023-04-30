#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
   pid_t status;
   status = vfork();
   printf("child Process is Executing: %d\n", getpid());
   if(status == 0){
       printf("child Process is executing: %d\n", getpid());
       exit(0);
   }
   return 0;
}