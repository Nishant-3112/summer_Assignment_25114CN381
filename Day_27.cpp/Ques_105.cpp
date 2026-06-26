#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void addStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudent() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }

    int getRollNo() {
        return rollNo;
    }

    void updateStudent() {
        cout << "Enter New Name: ";
        cin >> name;
        cout << "Enter New Marks: ";
        cin >> marks;
    }
};

int main() {
    Student s[100];
    int count = 0;
    int choice, roll, i;
    bool found;

    do {
        cout << "\n\n===== Student Record Management System =====";
        cout << "\n1. Add Student Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Student Record";
        cout << "\n4. Update Student Record";
        cout << "\n5. Delete Student Record";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            s[count].addStudent();
            count++;
            cout << "Record Added Successfully!";
            break;

        case 2:
            if(count == 0)
                cout << "No Records Available!";
            else {
                for(i = 0; i < count; i++)
                    s[i].displayStudent();
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> roll;
            found = false;

            for(i = 0; i < count; i++) {
                if(s[i].getRollNo() == roll) {
                    s[i].displayStudent();
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Student Record Not Found!";
            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> roll;
            found = false;

            for(i = 0; i < count; i++) {
                if(s[i].getRollNo() == roll) {
                    s[i].updateStudent();
                    cout << "Record Updated Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Student Record Not Found!";
            break;

        case 5:
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;
            found = false;

            for(i = 0; i < count; i++) {
                if(s[i].getRollNo() == roll) {
                    for(int j = i; j < count - 1; j++)
                        s[j] = s[j + 1];

                    count--;
                    cout << "Record Deleted Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Student Record Not Found!";
            break;

        case 6:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}