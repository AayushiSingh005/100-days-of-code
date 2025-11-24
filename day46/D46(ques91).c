#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    char result[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        // Check if character is NOT a vowel
        if (!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
              c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) {
            result[j++] = c;
        }
    }

    result[j] = '\0';  // End string

    printf("%s", result);
    return 0;
}
