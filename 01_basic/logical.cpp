#include <iostream>

using namespace std;

int main() {
    // Declare variables for student status and the number of tea cups purchased
    bool isStudent;
    int cups;

    // Prompt the user to enter their student status
    cout << "Welcome to the Tea Discount Program!" << endl;
    cout << "Are you a student? (Enter 1 for Yes and 0 for No): ";
    cin >> isStudent;

    // Prompt the user to enter the number of tea cups purchased
    cout << "How many cups of tea have you purchased? ";
    cin >> cups;

    // Check if the user is eligible for a discount
    if (isStudent || cups > 15) {
        // Eligibility based on being a student or purchasing more than 15 cups
        cout << "Congratulations! You are eligible for a discount." << endl;
    } else {
        // Not eligible for a discount
        cout << "Sorry, you are not eligible for a discount." << endl;
    }

    // Thank the user
    cout << "\nThank you for checking your discount eligibility!" << endl;

    return 0;
}
