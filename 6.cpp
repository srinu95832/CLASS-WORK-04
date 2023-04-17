#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the union my_union
union my_union {
    int integer;
    char string[100];
};

int main() {
    union my_union u; // Declare a union variable
    
    // Prompt the user to enter a value
    printf("Enter a value: ");
    char input[100];
    scanf("%s", input);
    
    // Determine whether the input is an integer or a string
    int is_integer = 1;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] < '0' || input[i] > '9') {
            is_integer = 0;
            break;
        }
    }
    
    // Store the value in the appropriate field of the union
    if (is_integer) {
        u.integer = atoi(input);
        printf("Input is an integer: %d\n", u.integer);
    } else {
        strcpy(u.string, input);
        printf("Input is a string: %s\n", u.string);
    }
    
    return 0;
}
