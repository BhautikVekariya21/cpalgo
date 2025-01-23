#include <iostream>
using namespace std;

int main() {
    int cups;

    cout << "Enter the number of tea cups purchased: ";
    cin >> cups;

    // Using ternary operator to check eligibility
    string result = (cups >= 10) ? "You qualify for a free tea cup!" : "Buy 10 or more cups to get a free tea cup.";
    cout << result << endl;

    return 0;
}
