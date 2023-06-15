
#include<stdio.h>
#define PI 3.14159

int main()
{
    float radius, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;

    printf("The circumference of the circle with radius %.2f is: %.2f\n", radius, circumference);

    return 0;
}
