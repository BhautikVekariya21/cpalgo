#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the number of tea cups purchased
    int cups;

    // Prompt the user to enter the number of cups they have purchased
    cout << "Welcome to the Tea Rewards Program!" << endl;
    cout << "Enter the number of cups you have purchased: ";
    cin >> cups;

    // Determine the reward badge based on the number of cups purchased
    if (cups > 20) {
        // GOLD badge for more than 20 cups
        cout << "Congratulations! You have earned a GOLD badge!" << endl;
    } else if (cups >= 10 && cups <= 20) {
        // SILVER badge for 10 to 20 cups
        cout << "Great job! You have earned a SILVER badge!" << endl;
    } else {
        // No badge for less than 10 cups
        cout << "Keep going! You have not earned a badge yet." << endl;
    }

    // Thank the user
    cout << "\nThank you for participating in the Tea Rewards Program!" << endl;

    return 0;
}
