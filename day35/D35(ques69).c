#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    first = second = -2147483648; // Smallest possible integer (INT_MIN)

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element (all elements equal).\n");
    else
        printf("%d\n", second);

    return 0;
}
