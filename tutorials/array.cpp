#include <iostream>
#include <string>
using namespace std; // standard namespace library

int main() {
  string arr[] = {"foo", "bar", "baz"};

  for (int i=0; i<sizeof(arr) / sizeof(string); i++) {
    cout << arr[i] << "\n";
  }
}