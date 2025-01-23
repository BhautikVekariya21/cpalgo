#include <iostream> // Include input-output stream library

using namespace std;

int main() {
    // Declare and initialize a variable for the player's score
    int playerScore = 200; // Player starts with a score of 200

    // Declare a constant for the maximum level in the game
    const int maxLevel = 10; // Maximum level is fixed and cannot be changed

    // Declare and update the player's health points
    int playerHealth = 100;  // Initial health points
    playerHealth = 80;       // Health reduced after taking damage

    // Note: The following line is commented out because constants cannot be reassigned
    // maxLevel = 15;

    // Output game-related messages
    cout << "Game Initialized!" << endl;
    cout << "Player Score: " << playerScore << endl;
    cout << "Player Health: " << playerHealth << endl;
    cout << "Maximum Level: " << maxLevel << endl;

    return 0; // Program execution ends successfully
}
