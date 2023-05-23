#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    // Displaying the menu
    printf("Welcome to our restaurant!\n");
    printf("1. Eru\n");
    printf("2. Ndole\n");
    printf("3. Achu\n");
    printf("4. Koki\n");
    printf("Please enter your choice (1-4): ");
    scanf("%d", &choice);

    // Checking the choice and displaying the result
    switch(choice) {
        case 1:
            printf("You have chosen Eru.\n");
            break;
        case 2:
            printf("You have chosen Ndole.\n");
            break;
        case 3:
            printf("You have chosen Achu.\n");
            break;
        case 4:
            printf("You have chosen Koki.\n");
            break;
        default:
            printf("You will remain stave.\n");
            break;
    }

    return 0;
}