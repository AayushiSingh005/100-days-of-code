#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // Input string (including spaces)
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Capitalize first character if it's a letter
    if (str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Traverse the string
    for (i = 1; str[i] != '\0'; i++) {
        // If previous char is space and current is alphabet → Capitalize
        if (str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Otherwise make other characters lowercase (optional)
        else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
