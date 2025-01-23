#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create a vector of integers
  vector<int> numbers = {10, 5, 2, 8, 3, 15};

  // Find the maximum number using a for loop
  int max_number = numbers[0]; 
  for (int i = 1; i < numbers.size(); ++i) {
    if (numbers[i] > max_number) {
      max_number = numbers[i];
    }
  }
  cout << "Maximum number: " << max_number << endl;

  // Calculate the sum of even numbers using a while loop
  int sum_even = 0;
  int index = 0;
  while (index < numbers.size()) {
    if (numbers[index] % 2 == 0) {
      sum_even += numbers[index];
    }
    index++;
  }
  cout << "Sum of even numbers: " << sum_even << endl;

  // Print the numbers in reverse order using a do-while loop
  int count = numbers.size() - 1;
  do {
    cout << numbers[count] << " ";
    count--;
  } while (count >= 0);
  cout << endl;

  return 0;
}