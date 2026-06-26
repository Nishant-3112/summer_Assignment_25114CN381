#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks[5];
    float total;
    float percentage;
    char grade;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks of 5 Subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }

        calculate();
    }

    void calculate() {
        total = 0;

        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }

        percentage = total / 5;

        if(percentage >= 90)
            grade = 'A';
        else if(percentage >= 75)
            grade = 'B';
        else if(percentage >= 60)
            grade = 'C';
        else if(percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n========== MARKSHEET ==========";
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;

        cout << "\nMarks:";
        for(int i = 0; i < 5; i++) {
            cout << "\nSubject " << i + 1 << ": " << marks[i];
        }

        cout << "\nTotal Marks: " << total << "/500";
        cout << "\nPercentage: " << percentage << "%";
        cout << "\nGrade: " << grade;

        if(grade == 'F')
            cout << "\nResult: Fail";
        else
            cout << "\nResult: Pass";

        cout << "\n==============================\n";
    }

    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Student s[100];
    int count = 0;
    int choice, roll, i;
    bool found;

    do {
        cout << "\n===== Marksheet Generation System =====";
        cout << "\n1. Add Student Marks";
        cout << "\n2. Generate Marksheet";
        cout << "\n3. Search Marksheet";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            s[count].input();
            count++;
            cout << "Student Record Added Successfully!";
            break;

        case 2:
            if(count == 0)
                cout << "No Records Available!";
            else {
                for(i = 0; i < count; i++)
                    s[i].display();
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            found = false;

            for(i = 0; i < count; i++) {
                if(s[i].getRollNo() == roll) {
                    s[i].display();
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Student Record Not Found!";
            break;

        case 4:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}