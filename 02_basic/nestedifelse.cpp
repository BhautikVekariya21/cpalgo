#include <iostream>
using namespace std;

int main() {
    string teaType;
    bool inStock;

    cout << "Enter the tea type (Green/Black): ";
    cin >> teaType;

    // Nested if-else to determine stock status
    if (teaType == "Green") {
        inStock = true;
        if (inStock) {
            cout << "Green Tea is available!" << endl;
        } else {
            cout << "Green Tea is out of stock." << endl;
        }
    } else if (teaType == "Black") {
        inStock = false;
        if (inStock) {
            cout << "Black Tea is available!" << endl;
        } else {
            cout << "Black Tea is out of stock." << endl;
        }
    } else {
        cout << "Invalid tea type entered." << endl;
    }

    return 0;
}
