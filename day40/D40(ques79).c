#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[100][100];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Traverse lower-left diagonals (including main diagonal)
    for (int k = 0; k < n; k++) {
        i = k;
        j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    // Traverse upper-right diagonals
    for (int k = 1; k < m; k++) {
        i = n - 1;
        j = k;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}
