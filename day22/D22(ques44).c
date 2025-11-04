#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = (i == 1) ? 1 : 2 * i; // first term denominator = 1, rest follow 2*i
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1lf", sum);

    return 0;
}
