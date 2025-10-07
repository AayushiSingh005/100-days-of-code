#include <stdio.h>

int main(void) {
    int units;
    printf("Enter number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (units <= 100) {
        printf("Bill: ₹%d\n", units * 5);
    } else if (units <= 200) {
        printf("Bill: ₹%d\n", 100 * 5 + (units - 100) * 7);
    } else if (units <= 300) {
        printf("Bill: ₹%d\n", 100 * 5 + 100 * 7 + (units - 200) * 10);
    } else {
        printf("Bill: ₹%d\n", 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12);
    }
    return 0;
}
