#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str); // Read string input

    while (str[i] != '\0') {
        char ch = str[i];

        // Convert to lowercase for easier checking
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
