#include <iostream>
#include <string>
using namespace std;

int main() {
  int myAge = 43;  
  // pointer
  int* ptr = &myAge;

  // print pointer (address of myAge variable)
  cout << ptr;

  return 0;
}
