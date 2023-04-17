#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int publication_year;
    float price;
};

void display_books(struct book books[], int num_books) {
    printf("Books published after 2010:\n");

    for (int i = 0; i < num_books; i++) {
        if (books[i].publication_year > 2010) {
            printf("\nTitle: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publication year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
        }
    }
}

int main() {
    // Create an array of book structures
    struct book books[5] = {
        {"Book 1", "Author 1", 2008, 10.50},
        {"Book 2", "Author 2", 2012, 15.75},
        {"Book 3", "Author 3", 2015, 20.00},
        {"Book 4", "Author 4", 2009, 12.25},
        {"Book 5", "Author 5", 2018, 25.50},
    };

    // Call the display_books function with the array of books
    display_books(books, 5);

    return 0;
}13
