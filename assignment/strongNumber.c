#include <stdio.h>

int main() {
    int N, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    temp = N;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == N) {
        printf("%d is a Strong number\n", N);
    } else {
        printf("%d is not a Strong number\n", N);
    }

    return 0;
}
