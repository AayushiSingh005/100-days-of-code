#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int total = n * (n + 1) / 2; // sum of integers from 0 to n

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int missing = total - sum;
    printf("%d", missing);

    return 0;
}
