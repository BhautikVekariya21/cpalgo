#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        std::cout << "Default constructor called: Person created with default values.\n";
    }

    // Parameterized Constructor
    Person(const std::string& personName, int personAge) {
        name = personName;
        age = personAge;
        std::cout << "Parameterized constructor called: Person created with name = " 
                  << name << " and age = " << age << ".\n";
    }

    // Copy Constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
        std::cout << "Copy constructor called: Person copied with name = " 
                  << name << " and age = " << age << ".\n";
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called: Person with name = " << name 
                  << " and age = " << age << " is destroyed.\n";
    }

    // Method to display person's details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main() {
    // Using Default Constructor
    Person person1;
    person1.display();

    // Using Parameterized Constructor
    Person person2("Alice", 25);
    person2.display();

    // Using Copy Constructor
    Person person3 = person2; // Copies person2 to person3
    person3.display();

    // Exiting the program, destructors will be called automatically
    return 0;
}
