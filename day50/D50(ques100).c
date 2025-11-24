#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            // Print comma before every substring except the first
            if (!first)
                printf(",");
            first = 0;

            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
        }
    }

    return 0;
}
