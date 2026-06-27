#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
    int ticketNo;
    string passengerName;
    string destination;
    int seats;
    float price;

public:
    void bookTicket() {
        cout << "Enter Ticket Number: ";
        cin >> ticketNo;

        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Number of Seats: ";
        cin >> seats;

        price = seats * 500;

        cout << "Ticket booked successfully!\n";
    }

    void displayTicket() {
        cout << "\n----- Ticket Details -----";
        cout << "\nTicket Number: " << ticketNo;
        cout << "\nPassenger Name: " << passengerName;
        cout << "\nDestination: " << destination;
        cout << "\nNumber of Seats: " << seats;
        cout << "\nTotal Price: " << price << endl;
    }

    void cancelTicket() {
        cout << "Ticket cancelled successfully!\n";
    }
};

int main() {
    TicketBooking ticket;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Display Ticket";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                ticket.bookTicket();
                break;

            case 2:
                ticket.displayTicket();
                break;

            case 3:
                ticket.cancelTicket();
                break;

            case 4:
                cout << "Thank you for using Ticket Booking System!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}