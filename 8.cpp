#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_data {
    int integer;
    float floating_point;
    char string[100];
};

int main() {
    union my_data data;

    printf("Enter a value: ");
    char input[100];
    fgets(input, sizeof(input), stdin);

    // Check if input is an integer
    char* end;
    long integer_value = strtol(input, &end, 10);
    if (*end == '\n' || *end == '\0') {
        data.integer = integer_value;
        printf("Input is an integer: %d\n", data.integer);
    }
    else {
        // Check if input is a floating-point number
        float floating_point_value = strtof(input, &end);
        if (*end == '\n' || *end == '\0') {
            data.floating_point = floating_point_value;
            printf("Input is a floating-point number: %f\n", data.floating_point);
        }
        else {
            // Input is a string
            strncpy(data.string, input, sizeof(data.string));
            printf("Input is a string: %s\n", data.string);
        }
    }

    return 0;
}
