#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {          // starting number for each row
        for (j = i; j <= 5; j++) {      // print numbers from i to 5
            printf("%d", j);
        }
        printf("\n");                    // move to next row
    }

    return 0;
}
