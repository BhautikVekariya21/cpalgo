#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store user input for tea type and quantity
    string userTea; // User's choice of tea
    int teaQuantity; // Number of cups the user wants to order

    // Prompt the user for their tea preference
    cout << "Welcome to the Tea House!" << endl;
    cout << "What type of tea would you like to order? " << endl;
    getline(cin, userTea); // Get the tea name from the user

    // Ask for the quantity of tea
    cout << "How many cups of " << userTea << " would you like to have? " << endl;
    cin >> teaQuantity; // Get the quantity from the user

    // Display the order summary
    cout << "\n--- Order Summary ---" << endl;
    cout << "Tea Ordered: " << userTea << endl;
    cout << "Number of Cups: " << teaQuantity << endl;

    // Additional message for user
    cout << "Thank you for your order! Your " << teaQuantity << " cups of " << userTea << " will be ready shortly." << endl;

    return 0;
}
