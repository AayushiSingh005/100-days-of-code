#include <stdio.h>#include <stdio.h>

int main() {
    int n = 4; // number of rows in the upper half
    int i, j, space;

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = i; space < n; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = n; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


int main() {
    int n = 4; // number of rows in the upper half
    int i, j, space;

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = i; space < n; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = n; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
