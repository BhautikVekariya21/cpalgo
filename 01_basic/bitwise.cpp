#include <iostream>
using namespace std;

int main() {
    int stock = 5; // Stock: 1 (Green) + 4 (Oolong) = 5
    int teaType;

    // Input the tea type to check
    cout << "Enter the tea type to check (1 for Green, 2 for Black, 4 for Oolong): ";
    cin >> teaType;

    // Use bitwise AND to check availability
    if (stock & teaType) {
        cout << "The selected tea type is in stock." << endl;
    } else {
        cout << "The selected tea type is not in stock." << endl;
    }

    return 0;
}
