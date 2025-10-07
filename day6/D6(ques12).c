#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
