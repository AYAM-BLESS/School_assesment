
#include <stdio.h>

int main() {
    int size, i, j, trace = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        trace += matrix[i][i];
    }

    printf("\nThe trace of the matrix is: %d", trace);

    return 0;
}
