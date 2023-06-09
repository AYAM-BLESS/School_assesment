
#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Error: The number of columns in matrix 1 must be equal to the number of rows in matrix 2\n");
        return 1;
    }

    int mat1[m1][n1], mat2[m2][n2], res[m1][n2];

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            res[i][j] = 0;
            for (k = 0; k < n1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The result of matrix multiplication is:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}