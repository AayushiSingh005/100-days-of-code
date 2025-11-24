#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Shift elements to left from the given position
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // reduce size after deletion

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
