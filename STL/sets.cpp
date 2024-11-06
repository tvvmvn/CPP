#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called cars that will store strings
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}


/*
Output

BMW
Ford
Mazda
Volvo
*/