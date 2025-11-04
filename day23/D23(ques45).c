#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Prompt the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (i = 0; i < n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    // Print the approximate sum with two decimal places
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
