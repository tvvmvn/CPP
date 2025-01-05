#include <iostream>
#include <string>
using namespace std;

int main() {
  int myAge = 43;  
  int* ptr = &myAge;

  // dereferencing a pointer.
  cout << *ptr;

  return 0;
}
