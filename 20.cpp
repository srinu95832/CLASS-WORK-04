#include <stdio.h>
#include <string.h>

// Define the union for hourly wage
union wage {
    float wage_float;
    int wage_int;
};

// Define the structure for employee
struct employee {
    char name[50];
    int id;
    union wage hourly_wage;
};

int main() {
    struct employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter hourly wage (as a float or integer in cents): ");
    scanf("%f", &emp.hourly_wage.wage_float);

    // Check if the input is an integer or a float
    if ((int)emp.hourly_wage.wage_float == emp.hourly_wage.wage_float) {
        // Input is an integer
        emp.hourly_wage.wage_int = (int)emp.hourly_wage.wage_float;
    }

    // Display the employee information
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);

    // Display the hourly wage as a float or an integer in cents
    if ((int)emp.hourly_wage.wage_float == emp.hourly_wage.wage_float) {
        printf("Hourly Wage: %d cents\n", emp.hourly_wage.wage_int);
    } else {
        printf("Hourly Wage: %.2f\n", emp.hourly_wage.wage_float);
    }

    return 0;
}
