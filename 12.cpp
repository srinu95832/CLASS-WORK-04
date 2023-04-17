#include <stdio.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    // Create an array of three student structs
    struct student students[3];

    // Prompt the user to enter the information for each student
    for (int i = 0; i < 3; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Display the information for all three students
    printf("\nStudent information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("GPA: %f\n", students[i].gpa);
    }

    return 0;
}
