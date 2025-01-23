#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    // Declare variables for different types of data
    unsigned int smallPackets = 1500; // Number of small packets in stock
    long long warehouseStorage = 5000000000; // Total storage capacity in a large warehouse
    short samplePackets = 50; // Number of sample packets available for customers

    // Display details of the inventory
    cout << "--- Tea Inventory Details ---" << endl;
    cout << "Number of small packets in stock: " << smallPackets << endl;
    cout << "Total warehouse storage capacity: " << warehouseStorage << " units" << endl;
    cout << "Number of sample packets available: " << samplePackets << endl;

    // Perform additional calculations (e.g., remaining capacity)
    long long usedStorage = smallPackets + samplePackets; // Simulate used storage
    long long remainingStorage = warehouseStorage - usedStorage; // Calculate remaining storage

    cout << "Used storage: " << usedStorage << " units" << endl;
    cout << "Remaining storage capacity: " << remainingStorage << " units" << endl;

    return 0;
}
