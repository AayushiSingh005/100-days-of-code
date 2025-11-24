#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int dq[n];   // deque to store indices
    int front = 0, back = -1;

    // Process first k elements
    for (int i = 0; i < k; i++) {
        while (front <= back && arr[dq[back]] <= arr[i])
            back--;
        dq[++back] = i;
    }

    // Process remaining elements
    for (int i = k; i < n; i++) {
        printf("%d ", arr[dq[front]]); // print max of window

        // Remove indices out of the window
        while (front <= back && dq[front] <= i - k)
            front++;

        // Remove smaller values
        while (front <= back && arr[dq[back]] <= arr[i])
            back--;

        dq[++back] = i;
    }

    // Print maximum of last window
    printf("%d", arr[dq[front]]);

    return 0;
}
