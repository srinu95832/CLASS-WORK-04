#include <stdio.h>

// Define the union
union my_data {
    int integer;
    float floating_point;
};

int main() {
    // Create a new union object
    union my_data data;

    // Read in a value from the user and determine its type
    printf("Enter a value: ");
    if (scanf("%d", &data.integer) == 1) {
        printf("The value is an integer: %d\n", data.integer);
    } else if (scanf("%f", &data.floating_point) == 1) {
        printf("The value is a floating-point number: %.2f\n", data.floating_point);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
