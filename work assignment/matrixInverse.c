
#include <stdio.h>

int determinant(int matrix[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        det += (matrix[0][i] * (matrix[1][(i+1)%3] * matrix[2][(i+2)%3] - matrix[1][(i+2)%3] * matrix[2][(i+1)%3]));
    }
    return det;
}

int main() {
    int matrix[3][3], cofactor[3][3], inverse[3][3];
    float det;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    det = determinant(matrix);

    if (det == 0) {
        printf("Inverse does not exist.");
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cofactor[i][j] = ((matrix[(j+1)%3][(i+1)%3] * matrix[(j+2)%3][(i+2)%3]) - (matrix[(j+1)%3][(i+2)%3] * matrix[(j+2)%3][(i+1)%3]));
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inverse[i][j] = cofactor[j][i] / det;
        }
    }

    printf("The inverse of the matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}