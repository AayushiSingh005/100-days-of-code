#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;  // You can change n for a larger pattern

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers
        for (k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
