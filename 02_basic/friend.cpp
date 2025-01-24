#include <iostream>
#include <string>

class Car; // Forward declaration for use in the Friend class example

// Class defining a Person
class Person {
private:
    std::string name;
    int age;

    // Friend function declaration
    friend void displayPersonDetails(const Person& person);

    // Friend class declaration
    friend class Car;

public:
    // Constructor
    Person(const std::string& personName, int personAge)
        : name(personName), age(personAge) {}

    // A method to update name (used by the Car class)
    void updateName(const std::string& newName) {
        name = newName;
    }
};

// Friend function definition
void displayPersonDetails(const Person& person) {
    std::cout << "Person Details - Name: " << person.name << ", Age: " << person.age << std::endl;
}

// Class defining a Car, which is a friend of Person
class Car {
private:
    std::string model;
    int year;

public:
    // Constructor
    Car(const std::string& carModel, int carYear)
        : model(carModel), year(carYear) {}

    // Method to access private data of Person
    void changeOwnerName(Person& owner, const std::string& newName) {
        owner.updateName(newName); // Accessing Person's private data via public method
        std::cout << "Car owner name changed to: " << newName << " for model " << model << std::endl;
    }
};

int main() {
    // Create a Person object
    Person person("John", 30);

    // Use friend function to display person's details
    displayPersonDetails(person);

    // Create a Car object
    Car car("Tesla Model 3", 2023);

    // Use friend class Car to change the owner's name
    car.changeOwnerName(person, "Alice");

    // Display updated person's details
    displayPersonDetails(person);

    return 0;
}
