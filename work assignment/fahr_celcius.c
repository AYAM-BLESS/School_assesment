
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    return 0;
}