#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    int accountNumber;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account created successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount deposited successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
        else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder Name: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n===== Bank Account Management System =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Account Details";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.display();
                break;

            case 5:
                cout << "Thank you for using Bank System!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}