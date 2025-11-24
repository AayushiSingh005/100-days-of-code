#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        if (freq[index] == 2) {   // Repeating for the first time
            printf("%c", str[i]);
            return 0;
        }
    }

    // If no repeating character
    printf("-1");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        if (freq[index] == 2) {   // Repeating for the first time
            printf("%c", str[i]);
            return 0;
        }
    }

    // If no repeating character
    printf("-1");
    return 0;
}
