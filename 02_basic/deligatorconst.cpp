#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;
    std::string accountType;

public:
    // Constructor 1: Basic constructor for initializing with only the account holder's name
    BankAccount(const std::string& name) 
        : accountHolder(name), balance(0.0), accountType("Savings") {
        std::cout << "Account created with default balance and type.\n";
    }

    // Constructor 2: Delegates to Constructor 1 and adds balance
    BankAccount(const std::string& name, double initialBalance) 
        : BankAccount(name) {
        balance = initialBalance;
        std::cout << "Account created with initial balance.\n";
    }

    // Constructor 3: Delegates to Constructor 2 and adds account type
    BankAccount(const std::string& name, double initialBalance, const std::string& type) 
        : BankAccount(name, initialBalance) {
        accountType = type;
        std::cout << "Account created with initial balance and type.\n";
    }

    void display() const {
        std::cout << "Account Holder: " << accountHolder
                  << ", Balance: $" << balance
                  << ", Account Type: " << accountType << "\n";
    }
};

int main() {
    BankAccount account1("Alice"); // Calls Constructor 1
    BankAccount account2("Bob", 500.0); // Calls Constructor 2
    BankAccount account3("Charlie", 1000.0, "Checking"); // Calls Constructor 3

    account1.display();
    account2.display();
    account3.display();

    return 0;
}
