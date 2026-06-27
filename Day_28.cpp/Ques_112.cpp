#include <iostream>
#include <string>
using namespace std;

class Contact {
    string name;
    string phone;
    string email;

public:
    void addContact() {
        cin.ignore();

        cout << "Enter Contact Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Contact added successfully!\n";
    }

    void displayContact() {
        cout << "\n----- Contact Details -----";
        cout << "\nName: " << name;
        cout << "\nPhone Number: " << phone;
        cout << "\nEmail: " << email << endl;
    }

    void searchContact(string searchName) {
        if (name == searchName) {
            displayContact();
        }
        else {
            cout << "Contact not found!\n";
        }
    }

    void deleteContact() {
        name = "";
        phone = "";
        email = "";
        cout << "Contact deleted successfully!\n";
    }
};

int main() {
    Contact contact;
    int choice;
    string searchName;

    do {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contact";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                contact.addContact();
                break;

            case 2:
                contact.displayContact();
                break;

            case 3:
                cin.ignore();
                cout << "Enter name to search: ";
                getline(cin, searchName);
                contact.searchContact(searchName);
                break;

            case 4:
                contact.deleteContact();
                break;

            case 5:
                cout << "Exiting Contact Management System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}