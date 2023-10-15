#include <iostream>
#include <string>
using namespace std;

/*
  Custom error
*/

int main() {

  int age = 15;

  try {

    cout << "Guinness, please\n";

    if (age < 18) {
      /*
        terminating due to uncaught exception (of type int)
        
        = JavaScript
      */
      throw 400;
    }

    cout << "OK";

  } catch (int code) {
    cout << "ErrorCode: " << code;
  }
}