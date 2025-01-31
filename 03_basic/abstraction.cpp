#include <iostream>

// Abstract class defining an interface
class Shape {
public:
    // Pure virtual function (must be implemented by derived classes)
    virtual double area() const = 0;

    // Virtual destructor (good practice for polymorphism)
    virtual ~Shape() = default;
};

// Concrete implementation of Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implement the abstract method
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Another concrete implementation
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implement the abstract method
    double area() const override {
        return width * height;
    }
};

int main() {
    Shape* shapes[] = {new Circle(5), new Rectangle(4, 6)};

    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    // Cleanup
    delete shapes[0];
    delete shapes[1];
    return 0;
}