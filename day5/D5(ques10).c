#include <stdio.h>

int main(void) {
    int seconds, hours, minutes, remaining_seconds;
    printf("Enter time in seconds: ");
    if (scanf("%d", &seconds) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remaining_seconds = seconds % 60;
    printf("%d:%02d:%02d\n", hours, minutes, remaining_seconds);
    return 0;
}
