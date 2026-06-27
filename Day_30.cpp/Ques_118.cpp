#include <iostream>
#include <string>
using namespace std;

class Library {
    int bookId[100];
    string bookName[100];
    string author[100];
    int count;

public:
    Library() {
        count = 0;
    }

    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookId[count];

        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, bookName[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        count++;

        cout << "Book added successfully!\n";
    }

    void displayBooks() {
        if(count == 0) {
            cout << "No books available!\n";
            return;
        }

        cout << "\n----- Book List -----\n";

        for(int i = 0; i < count; i++) {
            cout << "\nBook ID: " << bookId[i];
            cout << "\nBook Name: " << bookName[i];
            cout << "\nAuthor: " << author[i] << endl;
        }
    }

    void searchBook() {
        int id;
        cout << "Enter Book ID to search: ";
        cin >> id;

        for(int i = 0; i < count; i++) {
            if(bookId[i] == id) {
                cout << "\nBook Found";
                cout << "\nBook Name: " << bookName[i];
                cout << "\nAuthor: " << author[i] << endl;
                return;
            }
        }

        cout << "Book not found!\n";
    }

    void deleteBook() {
        int id;
        cout << "Enter Book ID to delete: ";
        cin >> id;

        for(int i = 0; i < count; i++) {
            if(bookId[i] == id) {

                for(int j = i; j < count-1; j++) {
                    bookId[j] = bookId[j+1];
                    bookName[j] = bookName[j+1];
                    author[j] = author[j+1];
                }

                count--;
                cout << "Book deleted successfully!\n";
                return;
            }
        }

        cout << "Book not found!\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Mini Library System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Delete Book";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                lib.addBook();
                break;

            case 2:
                lib.displayBooks();
                break;

            case 3:
                lib.searchBook();
                break;

            case 4:
                lib.deleteBook();
                break;

            case 5:
                cout << "Exiting Mini Library System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}