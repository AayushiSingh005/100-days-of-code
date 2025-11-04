#include <stdio.h>

int main() {
    char binary[100];
    int i;

    scanf("%s", binary); // read binary number as a string

    // Flip each bit
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }

    printf("%s", binary);

    return 0;
}
