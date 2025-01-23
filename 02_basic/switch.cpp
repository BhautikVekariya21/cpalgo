#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose a tea type:\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "3. Herbal Tea\n";
    cout << "4. Oolong Tea\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Using switch case to determine tea type
    switch (choice) {
        case 1:
            cout << "You chose Green Tea - Rich in antioxidants." << endl;
            break;
        case 2:
            cout << "You chose Black Tea - Strong and bold flavor." << endl;
            break;
        case 3:
            cout << "You chose Herbal Tea - Calming and caffeine-free." << endl;
            break;
        case 4:
            cout << "You chose Oolong Tea - A perfect balance of flavor." << endl;
            break;
        default:
            cout << "Invalid choice. Please select between 1 and 4." << endl;
    }

    return 0;
}
