#include <iostream>
using namespace std;

int main() {
    int teaBags;

    // Input the number of tea bags
    cout << "Enter the number of tea bags you have: ";
    cin >> teaBags;

    // Add 10 extra bags if fewer than 20
    if (teaBags < 20) {
        teaBags += 10; // Assignment operator
        cout << "You received 10 extra bags!" << endl;
    }

    // Display the updated total
    cout << "Updated total: " << teaBags << " tea bags" << endl;

    return 0;
}
