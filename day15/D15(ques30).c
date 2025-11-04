#include <stdio.h>

int main() {
    int n, rev = 0, digit;
    
    scanf("%d", &n);
    
    while (n != 0) {
        digit = n % 10;       // Get the last digit
        rev = rev * 10 + digit; // Add it to the reversed number
        n /= 10;               // Remove the last digit
    }
    
    printf("%d", rev);
    
    return 0;
}
