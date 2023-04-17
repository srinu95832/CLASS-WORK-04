#include <stdio.h>

// Define the union
union my_union {
    int integer;
    float floating_point;
};

int main() {
    // Create a new union object and assign values to both fields
    union my_union u;
    u.integer = 42;
    u.floating_point = 3.14;

    // Print the value of the union
    printf("The value of the union is: %d\n", u.integer);

    return 0;
}
