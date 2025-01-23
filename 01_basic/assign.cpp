#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the number of tea bags
    int teaBags;

    // Prompt the user to enter the number of tea bags
    cout << "Welcome to the Tea Stock Checker!" << endl;
    cout << "Enter the number of tea bags you currently have: ";
    cin >> teaBags;

    // Check if the number of tea bags is below the threshold (10)
    if (teaBags < 10) {
        // Restock by adding 5 more tea bags
        teaBags += 5;
        cout << "Your stock was low. 5 tea bags have been added to your inventory." << endl;
    } else {
        // Inform the user that their stock is sufficient
        cout << "Your tea bag stock is sufficient." << endl;
    }

    // Display the total number of tea bags
    cout << "\nYour total number of tea bags is: " << teaBags << endl;

    // Thank the user
    cout << "\nThank you for using the Tea Stock Checker!" << endl;

    return 0;
}