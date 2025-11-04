#include <stdio.h>

int main() {
    int n;
    
    // Taking input
    scanf("%d", &n);
    
    // Printing numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");  // Print space between numbers
        }
    }
    
    return 0;
}

