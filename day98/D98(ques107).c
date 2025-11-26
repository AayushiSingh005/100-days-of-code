#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of Student 1:\n");
    scanf("%s %d %d", s1.name, &s1.id, &s1.marks);

    // Input for second student
    printf("Enter details of Student 2:\n");
    scanf("%s %d %d", s2.name, &s2.id, &s2.marks);

    // Compare the structures
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.id == s2.id &&
        s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
