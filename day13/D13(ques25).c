#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    printf("Enter two numbers and an operator: ");
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                fprintf(stderr, "Division by zero\n");
                return 1;
            }
            printf("%d\n", a / b);
            break;
        case '%':
            if (b == 0) {
                fprintf(stderr, "Modulo by zero\n");
                return 1;
            }
            printf("%d\n", a % b);
            break;
        default:
            fprintf(stderr, "Invalid operator\n");
            return 1;
    }
    return 0;
}                   