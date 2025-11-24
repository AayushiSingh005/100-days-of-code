#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Total sum from 1 to n
    int total = n * (n + 1) / 2;

    // We want: sum(1 to x) == sum(x to n)
    // sum(1 to x) = x*(x+1)/2
    // sum(x to n) = total - (x*(x-1)/2)

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = total - (x * (x - 1) / 2);

        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
