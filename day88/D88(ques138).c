#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    char *names[] = { "RED", "YELLOW", "GREEN" };
    int size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < size; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
