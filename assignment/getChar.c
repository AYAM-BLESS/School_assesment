#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50], gender[10], qualification[10], location[50], goal[100];
    int age;

    // Asking questions and taking answers
    printf("What is your name? ");
    fgets(name, 50, stdin);
    printf("What is your gender? ");
    fgets(gender, 10, stdin);
    printf("How old are you? ");
    scanf("%d", &age);
    getchar(); // To clear the input buffer
    printf("What is your highest qualification? ");
    fgets(qualification, 10, stdin);
    printf("Where do you live? ");
    fgets(location, 50, stdin);
    printf("What do you want? ");
    fgets(goal, 100, stdin);

    // Displaying the questions and answers
    printf("\nInterview Summary:\n");
    printf("Name: %s", name);
    printf("Gender: %s", gender);
    printf("Age: %d\n", age);
    printf("Highest Qualification: %s", qualification);
    printf("Location: %s", location);
    printf("Goal: %s", goal);

    return 0;
}