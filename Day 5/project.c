#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int id;
};

void displayMenu();
void addBook();
int getNextId();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateBook();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 6);

    return 0;
}

void displayMenu() {
    printf("\n===== Library Management System =====\n");
    printf("1. Add a Book\n");
    printf("2. Display All Books\n");
    printf("3. Search for a Book\n");
    printf("4. Update a Book\n");
    printf("5. Delete a Book\n");
    printf("6. Exit\n");
}

int getNextId() {
    FILE *file = fopen("library.txt", "rb");
    if (file == NULL) {
        return 1;
    }

    struct Book currentBook;
    int maxId = 0;

    while (fread(&currentBook, sizeof(struct Book), 1, file) == 1) {
        if (currentBook.id > maxId) {
            maxId = currentBook.id;
        }
    }

    fclose(file);

    return maxId + 1;
}

void addBook() {
    struct Book newBook;

    printf("Enter Book Title: ");
    fflush(stdin);
    fgets(newBook.title, sizeof(newBook.title), stdin);

    printf("Enter Author Name: ");
    fflush(stdin);
    fgets(newBook.author, sizeof(newBook.author), stdin);

    newBook.id = getNextId();

    FILE *file = fopen("library.txt", "ab");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fwrite(&newBook, sizeof(struct Book), 1, file);

    fclose(file);

    printf("Book added successfully with ID: %d\n", newBook.id);
}

void displayBooks() {
    FILE *file = fopen("library.txt", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\n===== All Books in the Library =====\n");

    struct Book currentBook;

    while (fread(&currentBook, sizeof(struct Book), 1, file) == 1) {
        printf("ID: %d\n", currentBook.id);
        printf("Title: %s", currentBook.title);
        printf("Author: %s", currentBook.author);
        printf("\n");
    }

    fclose(file);
}

void searchBook() {
    int searchId;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);

    FILE *file = fopen("library.txt", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct Book currentBook;
    int found = 0;

    while (fread(&currentBook, sizeof(struct Book), 1, file) == 1) {
        if (currentBook.id == searchId) {
            printf("\n===== Book Found =====\n");
            printf("ID: %d\n", currentBook.id);
            printf("Title: %s", currentBook.title);
            printf("Author: %s", currentBook.author);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }

    fclose(file);
}

void updateBook() {
    int updateId;
    printf("Enter Book ID to update: ");
    scanf("%d", &updateId);

    FILE *file = fopen("library.txt", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "wb");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        fclose(file);
        return;
    }

    struct Book currentBook;
    int found = 0;

    while (fread(&currentBook, sizeof(struct Book), 1, file) == 1) {
        if (currentBook.id == updateId) {
            printf("Enter Book Title: ");
            fflush(stdin);
            fgets(currentBook.title, sizeof(currentBook.title), stdin);

            printf("Enter Author Name: ");
            fflush(stdin);
            fgets(currentBook.author, sizeof(currentBook.author), stdin);

            found = 1;
        }

        fwrite(&currentBook, sizeof(struct Book), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove("library.txt");
    rename("temp.txt", "library.txt");

    if (found) {
        printf("Book updated successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}

void deleteBook() {
    int deleteId;
    printf("Enter Book ID to delete: ");
    scanf("%d", &deleteId);

    FILE *file = fopen("library.txt", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "wb");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        fclose(file);
        return;
    }

    struct Book currentBook;
    int found = 0;

    while (fread(&currentBook, sizeof(struct Book), 1, file) == 1) {
        if (currentBook.id == deleteId) {
            found = 1;
        } else {
            fwrite(&currentBook, sizeof(struct Book), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("library.txt");
    rename("temp.txt", "library.txt");

    if (found) {
        printf("Book deleted successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}
