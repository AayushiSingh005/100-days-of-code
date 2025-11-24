#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    char longest[200] = "";
    char current[200] = "";
    int li = 0, ci = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            current[ci] = '\0';  // End current word

            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }

            ci = 0; // Reset for next word
            if (str[i] == '\0')
                break;

        } else {
            current[ci++] = str[i];
        }
    }

    printf("%s", longest);
    return 0;
}
