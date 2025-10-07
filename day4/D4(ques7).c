// Q7: Compute factorial of a non-negative integer (iterative)
#include <stdio.h>

int main(void) {
    unsigned int n;
    unsigned long long result = 1;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    for (unsigned int i = 2; i <= n; ++i) result *= i;
    printf("Factorial of %u is %llu\n", n, result);
    return 0;
}
