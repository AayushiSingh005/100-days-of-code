
#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;


    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    
    printf("Area=%.2f, Perimeter=%.2f\n", area, perimeter);

    return 0;
}
