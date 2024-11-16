#include <iostream>
#include <string>
using namespace std;

// abstract class
class Base {
  public:
    // It has virtual function(abstract function)
    virtual void f() = 0;
};

class Derived {
  public:
    // implementation of vitual function
    void f() {
      cout << "f invoked";
    }
};

int main() {
  Derived d;

  d.f();
}