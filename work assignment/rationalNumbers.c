#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num == (int)num) {
        printf("The number is rational.\n");
    } else {
        printf("The number is irrational.\n");
    }
    return 0;
}