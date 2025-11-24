#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    char *word_start = NULL;

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (word_start == NULL)
                word_start = &str[i];
        } else {
            if (word_start != NULL) {
                reverse(word_start, &str[i - 1]);
                word_start = NULL;
            }
        }
    }

    printf("%s", str);
    return 0;
}
