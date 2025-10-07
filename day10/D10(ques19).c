#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter side lengths: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || c == a) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    return 0;
}