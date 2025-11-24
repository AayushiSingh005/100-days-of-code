#include <stdio.h>
#include <string.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r;

    char input[20];
    scanf("%s", input);

    // Map input string to enum
    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role\n");
        return 0;
    }

    // Print message based on role
    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
