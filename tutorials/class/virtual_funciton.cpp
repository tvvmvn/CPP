#include <iostream>
#include <string>
using namespace std;

/*
A virtual function (also known as virtual methods) is a member function 
that is declared within a base class and is re-defined (overridden) 
by a derived class. They are mainly used to achieve Runtime polymorphism.
*/

class Base {
  // private member variable
  int x;
 
public:
  // pure virtual function (or abstract function)
  virtual void fun() = 0;

  // getter function to access x
  int getX() { return x; }
};
 
class Derived : public Base {
  // private member variable
  int y;
 
public:
  // implementation of the pure virtual function
  void fun() { cout << "fun() called"; }
};
 
int main(void) {
  Derived d;

  d.fun();

  return 0;
}
