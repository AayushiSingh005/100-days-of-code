#include <stdio.h>

int main() {
    int n, i, j, k, isDistinct = 1;
    int matrix[100][100], diag[100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &n);  // Square matrix only

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Store diagonal elements
    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    // Check for distinctness
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
