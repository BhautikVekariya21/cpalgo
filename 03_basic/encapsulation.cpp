#include <iostream>
#include <string>

class Employee {
private:
    // Private data members
    std::string name;
    int age;
    double salary;

public:
    // Constructor with validation (uses setters)
    Employee(const std::string &name, int age, double salary) {
        setName(name);
        setAge(age);
        setSalary(salary);
    }

    // Setters with validation
    void setName(const std::string &newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        } else {
            std::cout << "Error: Age must be positive.\n";
        }
    }

    void setSalary(double newSalary) {
        if (newSalary >= 0) {
            salary = newSalary;
        } else {
            std::cout << "Error: Salary cannot be negative.\n";
        }
    }

    // Getters (const to prevent modification)
    std::string getName() const { return name; }
    int getAge() const { return age; }
    double getSalary() const { return salary; }

    // Additional method to demonstrate behavior
    void promote(double raiseAmount) {
        if (raiseAmount > 0) {
            salary += raiseAmount;
            std::cout << name << " promoted! New salary: " << salary << "\n";
        } else {
            std::cout << "Invalid raise amount.\n";
        }
    }
};

int main() {
    Employee emp("Alice Smith", 30, 50000.0);

    // Access data via getters
    std::cout << "Name: " << emp.getName() << "\n";
    std::cout << "Age: " << emp.getAge() << "\n";
    std::cout << "Salary: $" << emp.getSalary() << "\n";

    // Modify data via setters
    emp.setAge(31);       // Valid update
    emp.setSalary(-1000); // Triggers error message

    // Use behavior-based method
    emp.promote(15000.0);

    return 0;
}