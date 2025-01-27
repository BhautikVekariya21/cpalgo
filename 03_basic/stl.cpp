#include <iostream>
#include <queue>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

class RestaurantWaitlist {
private:
    queue<string> waitlistQueue; // To manage the FIFO serving order
    list<string> waitlistList;   // To allow removal of specific groups

public:
    // Add a group to the waitlist
    void addGroup(const string& groupName) {
        waitlistQueue.push(groupName);
        waitlistList.push_back(groupName);
        cout << "Added group: " << groupName << " to the waitlist.\n";
    }

    // Serve the next group in the waitlist
    void serveNext() {
        if (waitlistQueue.empty()) {
            cout << "No groups in the waitlist to serve.\n";
            return;
        }
        string nextGroup = waitlistQueue.front();
        waitlistQueue.pop();
        waitlistList.remove(nextGroup); // Keep both structures in sync
        cout << "Served group: " << nextGroup << ".\n";
    }

    // Remove a specific group from the waitlist
    void removeGroup(const string& groupName) {
        auto it = find(waitlistList.begin(), waitlistList.end(), groupName);
        if (it != waitlistList.end()) {
            waitlistList.erase(it);
            queue<string> tempQueue;
            // Rebuild the queue without the removed group
            while (!waitlistQueue.empty()) {
                if (waitlistQueue.front() != groupName) {
                    tempQueue.push(waitlistQueue.front());
                }
                waitlistQueue.pop();
            }
            swap(waitlistQueue, tempQueue);
            cout << "Removed group: " << groupName << " from the waitlist.\n";
        } else {
            cout << "Group " << groupName << " not found in the waitlist.\n";
        }
    }

    // Display the current waitlist
    void displayWaitlist() const {
        if (waitlistList.empty()) {
            cout << "The waitlist is currently empty.\n";
            return;
        }
        cout << "Current waitlist: ";
        for (const auto& group : waitlistList) {
            cout << group << " ";
        }
        cout << "\n";
    }
};

int main() {
    RestaurantWaitlist waitlist;

    waitlist.addGroup("Group A");
    waitlist.addGroup("Group B");
    waitlist.addGroup("Group C");
    waitlist.displayWaitlist();

    waitlist.serveNext();
    waitlist.displayWaitlist();

    waitlist.removeGroup("Group B");
    waitlist.displayWaitlist();

    waitlist.removeGroup("Group D");
    waitlist.serveNext();
    waitlist.displayWaitlist();

    return 0;
}
