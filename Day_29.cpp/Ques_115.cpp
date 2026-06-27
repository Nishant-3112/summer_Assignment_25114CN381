#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2, result;
    int choice;

    do {
        cout << "\n===== String Operations Menu =====";
        cout << "\n1. Enter String";
        cout << "\n2. Display String";
        cout << "\n3. Find Length of String";
        cout << "\n4. Concatenate Two Strings";
        cout << "\n5. Reverse String";
        cout << "\n6. Compare Two Strings";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cin.ignore();
                cout << "Enter a string: ";
                getline(cin, str);
                break;

            case 2:
                cout << "String is: " << str;
                break;

            case 3:
                cout << "Length of string = " << str.length();
                break;

            case 4:
                cin.ignore();
                cout << "Enter second string: ";
                getline(cin, str2);

                result = str + str2;
                cout << "Concatenated string = " << result;
                break;

            case 5:
                result = str;
                for(int i = 0; i < result.length()/2; i++) {
                    char temp = result[i];
                    result[i] = result[result.length()-i-1];
                    result[result.length()-i-1] = temp;
                }

                cout << "Reversed string = " << result;
                break;

            case 6:
                cin.ignore();
                cout << "Enter second string: ";
                getline(cin, str2);

                if(str == str2)
                    cout << "Strings are equal";
                else
                    cout << "Strings are not equal";
                break;

            case 7:
                cout << "Exiting String Operations System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 7);

    return 0;
}