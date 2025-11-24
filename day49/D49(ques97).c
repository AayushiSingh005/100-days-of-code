#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    // Print first character if it's a letter
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);

    // Print characters after spaces
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
    }

    return 0;
}
