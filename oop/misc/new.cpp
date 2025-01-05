#include <iostream>
#include <string>
using namespace std;

class Test {
  public:
    void f() {
      cout << "f invoked";
    }
};

int main() {
  // object creation with new keyword
  Test* t = new Test();

  t->f();

  // you should delete object created with new keyword.
  // (The compiler provides a default destructor).
  delete t;
}