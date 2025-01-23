#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    // Declare variables to store the number of cups, price per cup, and total prices
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    // Prompt the user for the number of tea cups
    cout << "Welcome to the Tea Shop!" << endl;
    cout << "Enter the number of tea cups you want to order: ";
    cin >> cups;

    // Prompt the user for the price per cup
    cout << "Enter the price per cup: $";
    cin >> pricePerCup;

    // Calculate the total price
    totalPrice = cups * pricePerCup;

    // Display the original total price
    cout << fixed << setprecision(2); // Set precision for currency format
    cout << "\nOriginal Total Price: $" << totalPrice << endl;

    // Apply a 10% discount if the total price exceeds $50
    if (totalPrice > 50) {
        discountedPrice = totalPrice - (totalPrice * 0.10);
        cout << "Discount Applied (10% off): $" << discountedPrice << endl;
    } else {
        cout << "No discount applied. Total Price: $" << totalPrice << endl;
    }

    // Thank the user for their order
    cout << "\nThank you for visiting our Tea Shop! Enjoy your tea!" << endl;

    return 0;
}
