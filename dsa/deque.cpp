#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print deque elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}


/*
Output

Volvo
BMW
Ford
Mazda
*/