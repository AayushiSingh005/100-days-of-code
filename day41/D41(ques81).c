#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    gets(str); // Reads string including spaces (unsafe but fine for basic programs)

    // Count characters until null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
