#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, digit, sum = 0;
    
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        digit = temp % 10;          // extract last digit
        sum += factorial(digit);     // add factorial of digit
        temp /= 10;                  // remove last digit
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
