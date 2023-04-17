#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
    char department[50];
};

void display_employees(struct employee employees[], int num_employees) {
    for (int i = 0; i < num_employees; i++) {
        if (strcmp(employees[i].department, "Sales") == 0 && employees[i].salary > 50000.0) {
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: $%.2f\n", employees[i].salary);
            printf("Department: %s\n\n", employees[i].department);
        }
    }
}

int main() {
    struct employee employees[3] = {
        {"John Smith", 28, 45000.0, "Sales"},
        {"Jane Doe", 35, 55000.0, "Marketing"},
        {"Bob Johnson", 42, 65000.0, "Sales"}
    };
    display_employees(employees, 3);
    return 0;
}
