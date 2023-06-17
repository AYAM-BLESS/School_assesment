#include<stdio.h>
int main(){
   int i,noofdays;
   int first;
   printf("enter no of days in a month:");
   scanf("%d",&noofdays);
   printf("enter first day in a month:");
   scanf("%d",&first);
   for(i=1;i<first;i++)
      printf(" ");
   for(i=1;i<=noofdays;i++){
      printf("%3d",i);
      if((first+i-1)%7==0)
         printf("\n");
   }
   return 0;
}