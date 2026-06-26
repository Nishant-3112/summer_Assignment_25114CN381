#include <iostream>
using namespace std;

class Employee {
    int empId;
    string name;
    float basicSalary;
    float hra;
    float da;
    float tax;
    float netSalary;

public:
    void addEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        cout << "Enter Tax: ";
        cin >> tax;

        calculateSalary();
    }

    void calculateSalary() {
        netSalary = basicSalary + hra + da - tax;
    }

    void displaySalary() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nTax: " << tax;
        cout << "\nNet Salary: " << netSalary << endl;
    }

    int getId() {
        return empId;
    }

    void updateSalary() {
        cout << "Enter New Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter New HRA: ";
        cin >> hra;

        cout << "Enter New DA: ";
        cin >> da;

        cout << "Enter New Tax: ";
        cin >> tax;

        calculateSalary();
    }
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice, id, i;
    bool found;

    do {
        cout << "\n\n===== Salary Management System =====";
        cout << "\n1. Add Salary Record";
        cout << "\n2. Display Salary Details";
        cout << "\n3. Search Employee Salary";
        cout << "\n4. Update Salary";
        cout << "\n5. Delete Salary Record";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            emp[count].addEmployee();
            count++;
            cout << "Salary Record Added Successfully!";
            break;

        case 2:
            if(count == 0)
                cout << "No Salary Records Found!";
            else {
                for(i = 0; i < count; i++)
                    emp[i].displaySalary();
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for(i = 0; i < count; i++) {
                if(emp[i].getId() == id) {
                    emp[i].displaySalary();
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Record Not Found!";
            break;

        case 4:
            cout << "Enter Employee ID to Update Salary: ";
            cin >> id;

            found = false;

            for(i = 0; i < count; i++) {
                if(emp[i].getId() == id) {
                    emp[i].updateSalary();
                    cout << "Salary Updated Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Record Not Found!";
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

                    cout << "Salary Record Deleted Successfully!";
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Record Not Found!";
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