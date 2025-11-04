#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // number of rows

    for (i = 0; i < n; i++) {
        // print spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n"); // move to next row
    }

    return 0;
}


