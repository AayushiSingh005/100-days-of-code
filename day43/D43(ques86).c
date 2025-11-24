#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str); // Read string input

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome by comparing characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
