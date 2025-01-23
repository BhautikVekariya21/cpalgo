#include <iostream>
using namespace std;

int main() {
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups: ";
    cin >> cups;

    // Using if-else ladder to determine discount
    if (cups > 20) {
        discount = 0.20; // 20% discount
    } else if (cups >= 10) {
        discount = 0.10; // 10% discount
    } else if (cups >= 5) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0.0; // No discount
    }

    // Calculate total price after discount
    totalPrice = cups * pricePerCup;
    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount: $" << totalPrice << endl;

    return 0;
}
