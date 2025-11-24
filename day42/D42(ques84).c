#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    gets(str); // Read string input

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase (ASCII logic)
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
