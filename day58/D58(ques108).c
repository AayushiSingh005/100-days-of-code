#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Step 1: Left products
    int left = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = left;
        left *= nums[i];
    }

    // Step 2: Right products
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }

    // Output
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(",");
    }
    printf("]");

    return 0;
}
