#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    // Copy last k elements to the beginning of temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy first (n - k) elements after that
    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Print rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    printf("\n");
    return 0;
}
