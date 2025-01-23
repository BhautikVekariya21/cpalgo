#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables for favorite tea and its description
    string favoriteTea = "Chamomile Tea"; // Name of the tea
    string description = "A calming and aromatic herbal tea."; // Description of the tea

    // Display a welcoming message
    cout << "--- Favorite Tea Details ---" << endl;

    // Combine the tea name and description for output
    cout << "Tea Name: " << favoriteTea << endl;
    cout << "Description: " << description << endl;

    // Additional information
    string benefits = "Promotes relaxation and improves sleep quality."; // Additional details
    cout << "Health Benefits: " << benefits << endl;

    return 0;
}
