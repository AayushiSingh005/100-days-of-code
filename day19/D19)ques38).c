#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;  // extract last digit
        sum += digit;    // add to sum
        n /= 10;         // remove last digit
    }

    printf("%d", sum);

    return 0;
}
