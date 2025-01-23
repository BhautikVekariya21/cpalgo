#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    // Declare variables for the item price, quantity, and total cost
    float itemPrice = 49.99; // Price of a single item
    int itemQuantity = 3;    // Quantity of items to purchase

    // Round the item price to the nearest integer for display purposes
    int roundedItemPrice = static_cast<int>(itemPrice);

    // Calculate the total cost
    float totalPrice = itemPrice * itemQuantity;

    // Display item details and calculations
    cout << "--- Shopping Cart Details ---" << endl;
    cout << "Price of a single item: $" << fixed << setprecision(2) << itemPrice << endl;
    cout << "Rounded price of item: $" << roundedItemPrice << endl;
    cout << "Quantity of items: " << itemQuantity << endl;
    cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}