#include <stdio.h>

int main(void) {
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    if (scanf("%f %f", &cp, &sp) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (cp > sp) {
        loss = (cp - sp) / cp * 100;
        printf("Loss %.2f%%\n", loss);
    } else if (cp < sp) {
        profit = (sp - cp) / cp * 100;
        printf("Profit %.2f%%\n", profit);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}