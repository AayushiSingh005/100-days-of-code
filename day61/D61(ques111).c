#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int negIndex[n];
    int front = 0, back = 0;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndex[back++] = i;
    }

    // Print first window result
    if (back == front) printf("0 ");
    else printf("%d ", arr[negIndex[front]]);

    // Process rest windows
    for (int i = k; i < n; i++) {

        // Remove elements out of the window
        while (front < back && negIndex[front] <= i - k)
            front++;

        // Add new element if negative
        if (arr[i] < 0)
            negIndex[back++] = i;

        // Print result for this window
        if (front == back) printf("0 ");
        else printf("%d ", arr[negIndex[front]]);
    }

    return 0;
}
