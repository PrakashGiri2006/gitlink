#include <iostream>
using namespace std;

class Book {
public:
    char author[200];
    char title[200];
    int year;
};

int main() {
    int count;
    cout << "How many books you want to add: ";
    cin >> count;
    cin.ignore();  // To clear newline from input buffer after cin

    Book* books = new Book[count]; // Dynamic array

    for (int i = 0; i < count; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":\n";

        cout << "Enter Book author name: ";
        cin.getline(books[i].author, 200);

        cout << "Enter Book title: ";
        cin.getline(books[i].title, 200);

        cout << "Enter Book released year: ";
        cin >> books[i].year;
        cin.ignore();  // Clear input buffer
    }

    cout << "\nBooks Entered:\n";
    for (int k = 0; k < count; k++) {
        cout << "Author: " << books[k].author << "\n";
        cout << "Title: " << books[k].title << "\n";
        cout << "Year: " << books[k].year << "\n\n";
    }

    delete[] books; // Free allocated memory
    return 0;
}
