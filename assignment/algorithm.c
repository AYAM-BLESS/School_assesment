#include <stdio.h>

int main() {
    int A, i;

    printf("Enter a number: ");
    scanf("%d", &A);

    i = 2;
    while (i < A) {
        if (A % i == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}