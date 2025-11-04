#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (a * b) / gcd(a, b);

    printf("%d", lcm);

    return 0;
}
