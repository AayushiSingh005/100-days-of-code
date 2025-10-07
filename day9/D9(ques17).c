#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {     // roots are real and different
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf, %.2lf\n", root1, root2);
    } else if (discriminant == 0) {   // roots are real and same
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: %.2lf\n", root1);
    } else {   // roots are complex
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}