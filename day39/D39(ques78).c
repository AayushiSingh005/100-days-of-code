#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &n);  // Square matrix

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j)  // Main diagonal condition
                sum += matrix[i][j];
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
