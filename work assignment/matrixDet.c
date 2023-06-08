
#include <stdio.h>

#define N 3

int determinant(int matrix[N][N], int n) {
    int det = 0;
    int submatrix[N][N];

    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    } else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) {
                        continue;
                    }
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 1 ? -1 : 1) * matrix[0][x] * determinant(submatrix, n - 1);
        }
    }

    return det;
}

int main() {
    int matrix[N][N];
    printf("Enter the elements of the %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, N);

    printf("\nThe determinant of the matrix is: %d\n", det);

    return 0;
}

