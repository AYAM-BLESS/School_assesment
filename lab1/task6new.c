#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    int id1, id2;
    id1 = fork();
    id2 = fork();
    if(id1 == 0 && id2 == 0)
    fork();
    printf("welcome to cef 488\n");
    return 0;
}