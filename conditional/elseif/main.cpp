#include <iostream>
using namespace std;

int main() {

  int age = 20;

  if (age < 18) {
    cout << "Adult";
  } else if (age >= 18 && age < 35) {
    cout << "Young man";
  } else {
    cout << "Old man";
  }
  
  return 0;
}
