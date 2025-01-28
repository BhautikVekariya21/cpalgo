#include <iostream>
using namespace std;

// Base class: Payment
class Payment {
public:
    virtual void makePayment(double amount) {
        cout << "Processing a generic payment of $" << amount << endl;
    }
    virtual ~Payment() {} // Virtual destructor
};

// Derived class: CreditCardPayment
class CreditCardPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

// Derived class: PayPalPayment
class PayPalPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

// Derived class: CashPayment
class CashPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Processing cash payment of $" << amount << endl;
    }
};

int main() {
    // Array of Payment pointers
    Payment* payments[3];

    // Assigning different payment types
    payments[0] = new CreditCardPayment();
    payments[1] = new PayPalPayment();
    payments[2] = new CashPayment();

    // Making payments (demonstrating polymorphism)
    for (int i = 0; i < 3; ++i) {
        payments[i]->makePayment(100.0 + i * 50.0); // Different amounts
    }

    // Freeing allocated memory
    for (int i = 0; i < 3; ++i) {
        delete payments[i];
    }

    return 0;
}
