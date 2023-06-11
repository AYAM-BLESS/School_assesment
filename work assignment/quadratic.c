
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients of the quadratic equation (a,b,c): ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots of the quadratic equation are: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("The root of the quadratic equation is: %.2f", root1);
    }
    else {
        printf("The roots of the quadratic equation are complex and cannot be calculated.");
    }

    return 0;
}
 
