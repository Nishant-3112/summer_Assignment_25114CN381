#include <iostream>
using namespace std;

int main()
{
    int pin = 1234;
    int enteredPin;
    double balance = 5000;
    int choice;
    double amount;

    cout << "===== ATM SIMULATION =====" << endl;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin)
    {
        cout << "Incorrect PIN. Access Denied!" << endl;
        return 0;
    }

    do
    {
        cout << "\n----- ATM MENU -----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Your current balance is: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance)
                {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Insufficient balance!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                balance += amount;
                cout << "Money deposited successfully." << endl;
                cout << "Updated balance: Rs. " << balance << endl;
                break;

            case 4:
                cout << "Thank you for using ATM." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}