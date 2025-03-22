#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Access the top element
  cout << cars.top();
  
  return 0;
}

/*
Output

Mazda
*/
