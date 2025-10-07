#include <stdio.h>

int main(void) {
    int n, sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum=%d\n", sum);
    return 0;
}
