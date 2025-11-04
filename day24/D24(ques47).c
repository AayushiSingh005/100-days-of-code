#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {      // number of rows
        for (j = 1; j <= i; j++) {  // number of stars in each row
            printf("*");
        }
        printf("\n");                // move to next row
    }

    return 0;
}
