#include <stdio.h>
#include <string.h>

int main() {
    enum Menu { ADD, SUBTRACT, MULTIPLY };
    enum Menu choice;

    char input[20];
    int a, b;

    // Read input: operation and two numbers
    scanf("%s %d %d", input, &a, &b);

    // Map input string to enum
    if (strcmp(input, "ADD") == 0)
        choice = ADD;
    else if (strcmp(input, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation\n");
        return 0;
    }

    // Perform operation using switch
    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
