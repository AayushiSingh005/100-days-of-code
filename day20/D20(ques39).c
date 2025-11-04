#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;
    int hasOdd = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) { // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd) {
        product = 1; // if no odd digits, output 1
    }

    printf("%lld", product);

    return 0;
}
