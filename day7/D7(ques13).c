#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Leap year\n");
            } else {
                printf("Not a leap year\n");
            }
        } else {
            printf("Leap year\n");
        }
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}
