#include<stdio.h>
int main ()
{
    int x = 10, y = 15, z,k,w,a=1,b=1;
    y = x++;
    x = y++;
    z = x++ + ++y;
    k = 7>3? x:y;
    w = 9+7%2;
    a = x &&y%2;
    b = 3&2;
    printf("%d %d %d %d %d %d\n",x,y,z,k,w,a,b);
    return 0;
}