
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator!");
            return 0;
    }

    printf("%.1lf %c %.1lf = %.1lf \n", num1, operator, num2, result);
    return 0;
}


/*This program prompts the user to enter an operator and two numbers, 
then performs the corresponding arithmetic operation and displays the result.*/