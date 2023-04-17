#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
    char department[50];
};

void print_sales_employees(struct employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].department, "Sales") == 0 && emp[i].salary > 50000.0) {
            printf("Name: %s\nAge: %d\nSalary: %.2f\nDepartment: %s\n\n", emp[i].name, emp[i].age, emp[i].salary, emp[i].department);
        }
    }
}

int main() {
    struct employee emp[] = {
        {"John Doe", 30, 60000.0, "Sales"},
        {"Jane Smith", 40, 55000.0, "Marketing"},
        {"Bob Johnson", 35, 70000.0, "Sales"}
    };

    int n = sizeof(emp) / sizeof(struct employee);

    print_sales_employees(emp, n);

    return 0;
}
