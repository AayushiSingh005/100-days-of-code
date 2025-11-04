#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    
    scanf("%d", &n);
    
    last = n % 10; // last digit
    
    digits = (int)log10(n); // number of digits - 1
    first = n / pow(10, digits); // first digit

    // remove first and last digits
    swapped = n % (int)pow(10, digits); // remove first digit
    swapped = swapped - last;           // remove last digit placeholder

    // place first digit at last and last digit at first
    swapped = last * pow(10, digits) + swapped + first;

    printf("%d", swapped);

    return 0;
}
