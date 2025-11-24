#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; // Convert uppercase to lowercase
    }

    printf("%s\n", str);

    return 0;
}
