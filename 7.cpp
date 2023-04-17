#include <stdio.h>

// Define the employee structure
struct employee {
    char name[100];
    float salary;
    int age;
};

int main() {
    // Create an array of 3 employees
    struct employee employees[3];

    // Prompt the user to enter information for each employee
    for (int i = 0; i < 3; i++) {
        printf("Enter information for employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Print out the information for each employee
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}
