#include <iostream>
#include <vector>

using namespace std;

// Function declaration (call by value)
int findMaxByValue(const vector<int>& numbers) {
  int max_num = numbers[0]; 
  for (int i = 1; i < numbers.size(); ++i) {
    if (numbers[i] > max_num) {
      max_num = numbers[i]; 
    }
  }
  return max_num;
}

// Function declaration (call by reference)
void findMaxByReference(const vector<int>& numbers, int& max_num) { 
  max_num = numbers[0]; 
  for (int i = 1; i < numbers.size(); ++i) {
    if (numbers[i] > max_num) {
      max_num = numbers[i]; 
    }
  }
}

int main() {
  vector<int> numbers = {10, 5, 2, 8, 3, 15};

  // Function call (call by value)
  int max_value = findMaxByValue(numbers); 
  cout << "Maximum value (call by value): " << max_value << endl; 
  cout << "Original vector (call by value): ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << endl;

  // Function call (call by reference)
  int max_ref;
  findMaxByReference(numbers, max_ref);
  cout << "Maximum value (call by reference): " << max_ref << endl;
  cout << "Original vector (call by reference): ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}