#include <iostream>
#include <vector>
#include <algorithm> // For std::for_each

int main() {
    // Example: Lambda function to print elements of a vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Lambda function to print each number in the vector
    auto printNumber = [](int num) {
        std::cout << num << " ";
    };

    std::cout << "Numbers in the vector: ";
    std::for_each(numbers.begin(), numbers.end(), printNumber); // Using the lambda function
    std::cout << std::endl;

    // Example: Lambda function with capture to sum elements of the vector
    int sum = 0;
    auto addToSum = [&sum](int num) { 
        sum += num; // Captures 'sum' by reference to modify its value
    };

    std::for_each(numbers.begin(), numbers.end(), addToSum);
    std::cout << "Sum of the numbers: " << sum << std::endl;

    // Example: Lambda function with default capture
    int multiplier = 2;
    auto multiplyAndPrint = [=](int num) { // Captures 'multiplier' by value (default capture)
        std::cout << num * multiplier << " ";
    };

    std::cout << "Numbers multiplied by " << multiplier << ": ";
    std::for_each(numbers.begin(), numbers.end(), multiplyAndPrint);
    std::cout << std::endl;

    return 0;
}
