#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int year_published;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int num_books;
};

void add_book(struct Library* lib);
void display_books(struct Library* lib);
void list_books_by_author(struct Library* lib);
void count_books(struct Library* lib);

int main() {
    struct Library library = {0};
    int choice;

    do {
        printf("\nLibrary Management System");
        printf("\n-------------------------");
        printf("\n1. Add book details");
        printf("\n2. Display book details");
        printf("\n3. List all books of given author");
        printf("\n4. List the count of books in the library");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book(&library);
                break;
            case 2:
                display_books(&library);
                break;
            case 3:
                list_books_by_author(&library);
                break;
            case 4:
                count_books(&library);
                break;
            case 5:
                printf("\nThank you for using the Library Management System.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void add_book(struct Library* lib) {
    struct Book book;

    printf("\nEnter book details:");
    printf("\nTitle: ");
    scanf("%s", book.title);
    printf("Author: ");
    scanf("%s", book.author);
    printf("Year published: ");
    scanf("%d", &book.year_published);

    if (lib->num_books >= MAX_BOOKS) {
        printf("\nLibrary is full. Cannot add more books.\n");
        return;
    }

    lib->books[lib->num_books] = book;
    lib->num_books++;

    printf("\nBook added successfully.\n");
}

void display_books(struct Library* lib) {
    if (lib->num_books == 0) {
        printf("\nNo books found in library.\n");
        return;
    }

    printf("\nList of books in library:");
    printf("\n-------------------------\n");
    for (int i = 0; i < lib->num_books; i++) {
        printf("Title: %s\n", lib->books[i].title);
        printf("Author: %s\n", lib->books[i].author);
        printf("Year published: %d\n\n", lib->books[i].year_published);
    }
}

void list_books_by_author(struct Library* lib) {
    char author[100];
    int found_books = 0;

    printf("\nEnter author name: ");
    scanf("%s", author);

    printf("\nList of books by author %s:", author);
    printf("\n----------------------------\n");
    for (int i = 0; i < lib->num_books; i++) {
        if (strcmp(lib->books[i].author, author) == 0) {
            printf("Title: %s\n", lib->books[i].title);
            printf("Year published: %d\n\n", lib->books[i].year_published);
            found_books++;
        }
    }

    if (found_books == 0) {
        printf("\nNo books found by author %s.\n", author);
    }
}

void count
