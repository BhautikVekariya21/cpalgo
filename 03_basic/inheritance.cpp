#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
protected:
    string name;

public:
    Shape(string n) : name(n) {}

    // Virtual function to calculate area
    virtual double calculateArea() {
        return 0.0;
    }

    // Method to display the shape name
    void displayShape() {
        cout << "Shape: " << name << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}

    // Override calculateArea() for Rectangle
    double calculateArea() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(string n, double r) : Shape(n), radius(r) {}

    // Override calculateArea() for Circle
    double calculateArea() override {
        return M_PI * radius * radius; // M_PI is from <cmath>
    }
};

// Main function
int main() {
    // Create Rectangle and Circle objects
    Rectangle rect("Rectangle", 5.0, 3.0);
    Circle circle("Circle", 4.0);

    // Display details of the Rectangle
    rect.displayShape();
    cout << "Area: " << rect.calculateArea() << endl;

    // Display details of the Circle
    circle.displayShape();
    cout << "Area: " << circle.calculateArea() << endl;

    return 0;
}
