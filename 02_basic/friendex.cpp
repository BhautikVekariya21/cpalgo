#include <iostream>
#include <string>

using namespace std;

// Forward declaration of BankManager class
class BankManager;

// BankAccount class
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string name, double initialBalance) 
        : accountHolder(name), balance(initialBalance) {}

    // Friend class declaration
    friend class BankManager;

    // Friend function declaration
    friend void showAccountDetails(const BankAccount& account);
};

// BankManager class (Friend Class)
class BankManager {
public:
    void updateBalance(BankAccount& account, double newBalance) {
        account.balance = newBalance;  // Accessing private member
        cout << "BankManager updated the balance of " << account.accountHolder 
             << " to $" << account.balance << endl;
    }
};

// Friend function
void showAccountDetails(const BankAccount& account) {
    cout << "Account Holder: " << account.accountHolder << endl;
    cout << "Balance: $" << account.balance << endl;
}

int main() {
    // Creating a bank account
    BankAccount account("Alice", 5000.0);

    // Friend class accessing private members
    BankManager manager;
    manager.updateBalance(account, 7500.0);

    // Friend function accessing private members
    showAccountDetails(account);

    return 0;
}
