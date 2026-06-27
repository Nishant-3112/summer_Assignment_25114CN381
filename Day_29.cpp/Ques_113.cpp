#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b, result;

    do {
        cout << "\n===== Menu Driven Calculator =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice) {
            case 1:
                result = a + b;
                cout << "Addition = " << result;
                break;

            case 2:
                result = a - b;
                cout << "Subtraction = " << result;
                break;

            case 3:
                result = a * b;
                cout << "Multiplication = " << result;
                break;

            case 4:
                if (b != 0) {
                    result = a / b;
                    cout << "Division = " << result;
                }
                else {
                    cout << "Cannot divide by zero!";
                }
                break;

            case 5:
                cout << "Exiting Calculator...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}