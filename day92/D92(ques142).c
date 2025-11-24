#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    // Read details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Print all students
    printf("\n%-15s %-10s %-5s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-5d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
