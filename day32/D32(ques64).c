#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // to count frequency of digits 0-9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count each digit's frequency
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
