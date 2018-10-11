#include <iostream>
#include <iomanip> // Used to set precision to 2 decimal places.
using namespace std;

// VARIABLES
double rent, salesTax, discountDays, discountRooms, subTotal;
int numOfRooms, numOfDays;
string occasion;

// FUNCTION WILL HAVE SPECIAL DISCOUNT
double special() {
    // Amount of Rent
    cout << "Enter the amount of the rent: ";
    cin >> rent;

    // Number of booked rooms
    cout << "How many rooms will be booked? ";
    cin >> numOfRooms;
    if (numOfRooms >= 10 && numOfRooms < 20) {
        discountRooms = rent * 0.9;
    } else if (numOfRooms >= 20 && numOfRooms < 30) {
        discountRooms = rent * 0.8;
    } else {
        discountRooms = rent * 0.7;
    }

    // Number of days rooms are booked
    cout << "How many days will the room(s) be booked? ";
    cin >> numOfDays;
    if (numOfDays >= 3) {
        discountDays = rent * 0.95;
    } else {
        discountDays = 0;
    }

    // Sales Tax
    cout << "Enter the sales tax: ";
    cin >> salesTax;
    salesTax *= 0.01;

    double subTotal = discountDays * numOfRooms * numOfDays,
           discountTotal = (discountDays + discountRooms) / 2;

    // Output
    cout << "The cost of renting one room: " << rent << endl;
    cout << "The discount on each room as a percent: 5%" << endl;
    cout << "The number of rooms booked: " << numOfRooms << endl;
    cout << "The number of days the room(s) is/are booked: "
         << numOfDays << endl;
    cout << "The total cost of the rooms: $"
         << discountDays * numOfRooms << endl;
    cout << "The sales tax: $" << salesTax * subTotal << endl;
    cout << "The total billing amount: " << subTotal * (1 + salesTax);
}

// FUNCTION WILL HAVE NORMAL PRICES
double regular() {
    // Amount of Rent
    cout << "Enter the amount of the rent: ";
    cin >> rent;

    // Number of booked rooms
    cout << "How many rooms will be booked? ";
    cin >> numOfRooms;

    // Number of days rooms are booked
    cout << "How many days will the room(s) be booked? ";
    cin >> numOfDays;

    // Sales Tax
    cout << "Enter the sales tax: ";
    cin >> salesTax;
    salesTax *= 0.01;

    // Output
    cout << "The cost of renting one room: " << rent << endl;
    cout << "The discount on each room as a percent: $0.00" << endl;
    cout << "The number of rooms booked: " << numOfRooms << endl;
    cout << "The number of days the room(s) is/are booked: " << numOfDays;
    cout << "The total cost of the rooms: $" << rent * numOfRooms << "/day";
    subTotal = (rent * numOfRooms * numOfDays);
    cout << "The sales tax: $" << salesTax * subTotal << endl;
}

// MAIN FUNCTION
int main() {
    cout << "Is your stay for a special occasion? ";
    cin >> occasion;
    if (occasion == "y" || "Y" || "yes" || "Yes" || "YES") {
        special(); // Function will have special discount - Line 10
    } else {
        regular(); // Function will have normal prices - Line 42
    }

    return 0;
}