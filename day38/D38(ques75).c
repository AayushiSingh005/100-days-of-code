#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add the matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
