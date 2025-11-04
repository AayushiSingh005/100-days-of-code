#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;
    
    scanf("%d", &n);
    original = n;  // store the original number
    
    while (n != 0) {
        digit = n % 10;          // get last digit
        rev = rev * 10 + digit;  // build reversed number
        n /= 10;                 // remove last digit
    }
    
    if (original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
    
    return 0;
}
