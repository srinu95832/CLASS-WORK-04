#include <stdio.h>
#include <string.h>

// Define the book structure
struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    // Create an array of 5 book objects
    struct book books[5];

    // Prompt the user to enter the information for each book
    for (int i = 0; i < 5; i++) {
        printf("Enter the title of book %d: ", i+1);
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // Remove trailing newline character
        printf("Enter the author of book %d: ", i+1);
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; // Remove trailing newline character
        printf("Enter the price of book %d: ", i+1);
        scanf("%f", &books[i].price);
        getchar(); // Consume the trailing newline character
    }

    // Print out the information for each book
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i+1);
        printf("  Title: %s\n", books[i].title);
        printf("  Author: %s\n", books[i].author);
        printf("  Price: %.2f\n", books[i].price);
    }

    return 0;
}
