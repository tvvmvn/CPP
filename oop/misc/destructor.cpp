#include <iostream>
using namespace std;

class Test {
  public:
    // User-Defined Constructor
    Test() { 
      cout << "Constructor executed" << endl; 
    }

    // User-Defined Destructor
    ~Test() { 
      cout << "Destructor executed" << endl; 
    }
};

int main() {
  Test t;

  return 0;
}

/*
Output

Constructor executed
Destructor executed
*/

