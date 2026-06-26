#include <iostream>
using namespace std;

class Employee {
    int empId;
    string name;
    string department;
    float salary;

public:
    void addEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary << endl;
    }

    int getId() {
        return empId;
    }

    void updateEmployee() {
        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Department: ";
        cin >> department;

        cout << "Enter New Salary: ";
        cin >> salary;
    }
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice, id, i;
    bool found;

    do {
        cout << "\n\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            emp[count].addEmployee();
            count++;
            cout << "Employee Added Successfully!";
            break;

        case 2:
            if(count == 0)
                cout << "No Employee Records Found!";
            else {
                for(i = 0; i < count; i++)
                    emp[i].displayEmployee();
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for(i = 0; i < count; i++) {
                if(emp[i].getId() == id) {
                    emp[i].displayEmployee();
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Not Found!";
            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;

            found = false;

            for(i = 0; i < count; i++) {
                if(emp[i].getId() == id) {
                    emp[i].updateEmployee();
                    cout << "Employee Updated Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Not Found!";
            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for(i = 0; i < count; i++) {
                if(emp[i].getId() == id) {

                    for(int j = i; j < count - 1; j++)
                        emp[j] = emp[j + 1];

                    count--;

                    cout << "Employee Deleted Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Not Found!";
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