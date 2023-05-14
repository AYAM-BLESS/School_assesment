#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
if(fork()>0){
sleep(100);
printf("CEF 488");
}
}
