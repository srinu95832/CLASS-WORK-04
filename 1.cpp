#include <stdio.h>
#include <string.h>

// Define the person structure
struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create a new person object
    struct person person1;
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 1.85;

    // Print the person's information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
