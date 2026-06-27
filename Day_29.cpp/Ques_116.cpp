#include <iostream>
#include <string>
using namespace std;

class Inventory {
    int productId;
    string productName;
    int quantity;
    float price;

public:
    void addProduct() {
        cout << "Enter Product ID: ";
        cin >> productId;

        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Product added successfully!\n";
    }

    void displayProduct() {
        cout << "\n----- Product Details -----";
        cout << "\nProduct ID: " << productId;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price << endl;
    }

    void updateStock() {
        int newQuantity;

        cout << "Enter new quantity: ";
        cin >> newQuantity;

        quantity = newQuantity;

        cout << "Stock updated successfully!\n";
    }

    void sellProduct() {
        int sellQuantity;

        cout << "Enter quantity to sell: ";
        cin >> sellQuantity;

        if(sellQuantity <= quantity) {
            quantity -= sellQuantity;
            cout << "Product sold successfully!\n";
        }
        else {
            cout << "Insufficient stock!\n";
        }
    }
};

int main() {
    Inventory item;
    int choice;

    do {
        cout << "\n===== Inventory Management System =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Product";
        cout << "\n3. Update Stock";
        cout << "\n4. Sell Product";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                item.addProduct();
                break;

            case 2:
                item.displayProduct();
                break;

            case 3:
                item.updateStock();
                break;

            case 4:
                item.sellProduct();
                break;

            case 5:
                cout << "Exiting Inventory System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}