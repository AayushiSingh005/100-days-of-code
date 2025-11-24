#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    gets(str); // Read the input string

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s\n", str);

    return 0;
}
