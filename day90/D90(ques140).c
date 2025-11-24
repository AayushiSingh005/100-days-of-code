#include <stdio.h>
#include <string.h>

int main() {
    // Define enum for Gender
    enum Gender { MALE, FEMALE, OTHER };

    // Define struct Person
    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;
    char input[20];

    // Read gender input
    scanf("%s", input);

    // Map input string to enum
    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender\n");
        return 0;
    }

    // Print gender
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
