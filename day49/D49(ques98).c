#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    char surname[100];
    int lastSpace = -1;

    // Find last space to extract surname
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Copy surname
    strcpy(surname, str + lastSpace + 1);

    // Print initials (everything before surname)
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    // Print surname in full
    printf(" %s", surname);

    return 0;
}
