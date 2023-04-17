#include <stdio.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    // Create a student struct
    struct student my_student;

    // Prompt the user to enter the student's information
    printf("Enter the student's name: ");
    scanf("%s", my_student.name);

    printf("Enter the student's ID number: ");
    scanf("%d", &my_student.id);

    printf("Enter the student's GPA: ");
    scanf("%f", &my_student.gpa);

    // Print out the student's information
    printf("\nStudent information:\n");
    printf("Name: %s\n", my_student.name);
    printf("ID: %d\n", my_student.id);
    printf("GPA: %f\n", my_student.gpa);

    return 0;
}
