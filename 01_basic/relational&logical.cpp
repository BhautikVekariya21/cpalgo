#include <iostream>
using namespace std;

int main() {
    int cups;
    int years;

    // Input the number of cups and membership duration
    cout << "Enter the number of cups you purchased: ";
    cin >> cups;
    cout << "How many years have you been a member? ";
    cin >> years;

    // Check if the user qualifies for a discount
    if (cups > 12 || years > 1) {
        cout << "Congratulations! You qualify for the discount." << endl;
    } else {
        cout << "Sorry, you do not qualify for the discount." << endl;
    }

    return 0;
}
