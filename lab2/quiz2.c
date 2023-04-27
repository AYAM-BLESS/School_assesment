#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
 int main()
 {
 for (int i = 0; i < 10; i++)
 fork();
 printf("yes \n");
 }