#include <iostream>
using namespace std;

int main() {
    int packs;
    double pricePerPack, totalPrice, tax, finalPrice;

    // Input the number of packs and price per pack
    cout << "Enter the number of tea packs: ";
    cin >> packs;
    cout << "Enter the price per pack: $";
    cin >> pricePerPack;

    // Calculate total price and tax
    totalPrice = packs * pricePerPack;
    tax = totalPrice * 0.10; // 10% tax
    finalPrice = totalPrice + tax;

    // Display results
    cout << "Total price before tax: $" << totalPrice << endl;
    cout << "Final price after tax: $" << finalPrice << endl;

    return 0;
}
