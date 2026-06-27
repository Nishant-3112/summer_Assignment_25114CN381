#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

// Arrays to store student data
int rollNo[MAX];
string name[MAX];
int marks[MAX];

int count = 0;

// Function to add student
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> rollNo[count];

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name[count]);

    cout << "Enter Marks: ";
    cin >> marks[count];

    count++;

    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if(count == 0) {
        cout << "No student records available!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < count; i++) {
        cout << "\nRoll Number: " << rollNo[i];
        cout << "\nName: " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }
}

// Function to search student
void searchStudent() {
    int roll;

    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for(int i = 0; i < count; i++) {
        if(rollNo[i] == roll) {
            cout << "\nStudent Found";
            cout << "\nName: " << name[i];
            cout << "\nMarks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student not found!\n";
}

// Function to update marks
void updateMarks() {
    int roll, newMarks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for(int i = 0; i < count; i++) {
        if(rollNo[i] == roll) {

            cout << "Enter new marks: ";
            cin >> newMarks;

            marks[i] = newMarks;

            cout << "Marks updated successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

// Function to delete student
void deleteStudent() {
    int roll;

    cout << "Enter Roll Number to delete: ";
    cin >> roll;

    for(int i = 0; i < count; i++) {
        if(rollNo[i] == roll) {

            for(int j = i; j < count - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            count--;

            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Exiting Project...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 6);

    return 0;
}