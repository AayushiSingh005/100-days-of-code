#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    // Read student details
    printf("Name: ");
    scanf(" %[^\n]%*c", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    // Call function to print
    printStudent(s);

    return 0;
}
