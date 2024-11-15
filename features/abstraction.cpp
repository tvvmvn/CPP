#include <iostream>
#include <string>
using namespace std;

class Base {
  public:
    // virtual function (abstract function)
    // In C++, an interface can be simulated 
    // by making all methods pure virtual. 
    virtual void fun() = 0;
};
 
class Derived : public Base {
  public:
    // implementation of virtual function
    void fun() { 
      cout << "fun() is called"; 
    }
};
 
int main(void) {
  Derived d;

  d.fun();

  return 0;
}

/*
Output

fun() is called
*/
