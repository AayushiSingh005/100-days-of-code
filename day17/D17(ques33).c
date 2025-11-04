#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double sum = 0;

    scanf("%d", &n);
    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
