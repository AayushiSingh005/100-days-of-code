#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    } else {
        printf("No numbers found in file.\n");
    }

    fclose(fp);
    return 0;
}


