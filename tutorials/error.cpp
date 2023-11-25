#include <iostream>
#include <string>
using namespace std;

/*
  Not works
*/

int main() {
  try {
    cout << x;
  } catch (...) {
    cout << "I caught error";
  }

  cout << "other operations";
}


/*
  Custom error
*/


void isPIN(string pin) {
  try {
    if (pin == "") {
      throw "PIN is required";
    } 

    if (pin.length() != 4) {
      throw "PIN must be 4 numbers";
    }

    cout << "Nice PIN";

  } catch (char const* err) {
    cout << err;
  }
}

int main() {
  isPIN("");
}