#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100
    int evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even=%d, Odd=%d\n", evenCount, oddCount);

    return 0;
}
