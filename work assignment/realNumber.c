// this program checks if a given number is real or not//
#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num == (int)num) {
        printf("The number is a real number\n");
    } else {
        printf("The number is not a real number\n");
    }
    return 0;
}
