#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called cars that will store strings
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print list elements
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