#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
//printf("CEF 488");
if(fork()>0){
printf("CEF 488 \n");
sleep(3);

}
}
