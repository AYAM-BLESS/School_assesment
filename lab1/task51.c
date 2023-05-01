#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	for(int i=0;i<5;i++) // loop will run n times (n=5)
	{
		if(fork() == 0)
		{
			printf("Welcome to CEF488 \n");
			exit(0);
		}
	}
	
}
