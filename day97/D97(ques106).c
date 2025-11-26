#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    // Taking employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Opening binary file for writing
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Writing structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n\n");

    // Opening same file for reading
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Reading structure from file
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Displaying read data
    printf("Displaying employee data read from file:\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}
