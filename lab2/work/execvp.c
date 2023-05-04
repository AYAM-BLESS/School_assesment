#include<stdio.h>
#include<unistd.h>
int main() {
       char *program_name = "ls";
       //A null terminated array of character pointers
       char *args[]={program_name,"-la", ".", NULL};
       execvp(program_name,args);
   return 0;
}