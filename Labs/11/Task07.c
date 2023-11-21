#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define the Book structure
struct Book {
    int accessionNumber;
    string author;
    string title;
    bool isIssued;
};

// Function to display book information
void displayBook(const Book& book) {
    cout << "Accession Number: " << book.accessionNumber << endl;
    cout << "Author: " << book.author << endl;
    cout << "Title: " << book.title << endl;
    cout << "Issued: " << (book.isIssued ? "Yes" : "No") << endl;
    cout << endl;
}

// Function to display all books in the library
void displayAllBooks(const vector<Book>& library) {
    cout << "All Books in the Library:\n";
    for (const Book& book : library) {
        displayBook(book);
    }
}

// Function to add a new book to the library
void addNewBook(vector<Book>& library) {
    Book newBook;
    cout << "Enter Accession Number: ";
    cin >> newBook.accessionNumber;
    cout << "Enter Author: ";
    cin.ignore(); // Ignore any newline characters in the buffer
    getline(cin, newBook.author);
    cout << "Enter Title: ";
    getline(cin, newBook.title);
    newBook.isIssued = false;

    // Add the new book to the library
    library.push_back(newBook);

    cout << "Book added successfully!\n\n";
}

// Function to display all books by a particular author
void displayBooksByAuthor(const vector<Book>& library, const string& author) {
    cout << "Books by Author " << author << ":\n";
    for (const Book& book : library) {
        if (book.author == author) {
            displayBook(book);
        }
    }
}

// Function to display the number of books of a particular title
void displayNumberOfBooksByTitle(const vector<Book>& library, const string& title) {
    int count = 0;
    for (const Book& book : library) {
        if (book.title == title) {
            count++;
        }
    }
    cout << "Number of books with title " << title << ": " << count << endl << endl;
}

// Function to display the total number of books in the library
void displayTotalNumberOfBooks(const vector<Book>& library) {
    cout << "Total Number of Books in the Library: " << library.size() << endl << endl;
}

// Function to issue a book
void issueBook(vector<Book>& library) {
    int accessionNumber;
    cout << "Enter Accession Number of the book to be issued: ";
    cin >> accessionNumber;

    for (Book& book : library) {
        if (book.accessionNumber == accessionNumber) {
            if (!book.isIssued) {
                book.isIssued = true;
                cout << "Book issued successfully!\n\n";
            } else {
                cout << "Error: Book is already issued.\n\n";
            }
            return;
        }
    }

    cout << "Error: Book not found.\n\n";
}

int main() {
    vector<Book> library;  // Vector to store the library books

    int choice;
    do {
        cout << "Library Menu:\n";
        cout << "1 - Display book information\n";
        cout << "2 - Add a new book\n";
        cout << "3 - Display all the books by a particular author\n";
        cout << "4 - Display the number of books of a particular title\n";
        cout << "5 - Display the total number of books in the library\n";
        cout << "6 - Issue a book\n";
        cout << "0 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAllBooks(library);
                break;
            case 2:
                addNewBook(library);
                break;
            case 3:
                {
                    string author;
                    cout << "Enter the author's name: ";
                    cin.ignore(); // Ignore any newline characters in the buffer
                    getline(cin, author);
                    displayBooksByAuthor(library, author);
                }
                break;
            case 4:
                {
                    string title;
                    cout << "Enter the title: ";
                    cin.ignore(); // Ignore any newline characters in the buffer
                    getline(cin, title);
                    displayNumberOfBooksByTitle(library, title);
                }
                break;
            case 5:
                displayTotalNumberOfBooks(library);
                break;
            case 6:
                issueBook(library);
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}
