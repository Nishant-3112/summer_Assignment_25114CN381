#include <iostream>
#include <string>
using namespace std;

int main() {
    int rollNo[100], marks[100];
    string name[100];
    int n, choice, searchRoll;

    cout << "Enter number of students: ";
    cin >> n;

    do {
        cout << "\n===== Student Record System =====";
        cout << "\n1. Add Student Records";
        cout << "\n2. Display Student Records";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++) {
                    cout << "\nEnter details of student " << i + 1;

                    cout << "\nEnter Roll Number: ";
                    cin >> rollNo[i];

                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, name[i]);

                    cout << "Enter Marks: ";
                    cin >> marks[i];
                }

                cout << "Student records added successfully!";
                break;

            case 2:
                cout << "\n----- Student Records -----\n";

                for(int i = 0; i < n; i++) {
                    cout << "\nRoll Number: " << rollNo[i];
                    cout << "\nName: " << name[i];
                    cout << "\nMarks: " << marks[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;

                for(int i = 0; i < n; i++) {
                    if(rollNo[i] == searchRoll) {
                        cout << "\nStudent Found";
                        cout << "\nName: " << name[i];
                        cout << "\nMarks: " << marks[i];
                        break;
                    }
                }
                break;

            case 4:
                cout << "Exiting Student Record System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}