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


/*
  A class is abstract if it has at least one pure virtual function.
*/

class Test {
  // private member variable
  int x;

  public:
    // pure virtual function
    virtual void show() = 0;

    // getter function to access x
    int getX() { return x; }
};

int main(void) {
  // object of abstract class "Test" is not allowed.
  Test t;
}

/*
  C++ program to demonstrate that if we do not override
  the pure virtual function in the derived class, then
  the derived class also becomes an abstract class
*/

class Base {
  public:
    // pure virtual function
    virtual void show() = 0;
};
 
// pure virtual function "Base::show" has no overrider
class Derived : public Base {};
 
int main(void) {
  // object of abstract class type "Derived" is not allowed.
  Derived d;
}

/*
  C++ program that demonstrate that
  we can have pointers and references of abstract class type.
*/

class Base {
  public:
    // pure virtual function
    virtual void show() = 0;
};
 
class Derived : public Base {
  public:
    // implementation of the pure virtual function
    void show() { cout << "In Derived \n"; }
};
 
int main(void) {
  // creating a pointer of type Base 
  // pointing to an object of type Derived
  Base* bp = new Derived();

  // calling the show() function using the pointer
  bp->show();
}


/*
C++ program to demonstrate that
an abstract class can have constructors.
*/
 
// An abstract class with constructor
class Base {
  protected:
    // protected member variable
    int x;
 
  public:
    // pure virtual function
    virtual void fun() = 0;
 
    // constructor of Base class
    Base(int i) {
      x = i;
      cout << "Constructor of base called\n";
    }
};
 
class Derived : public Base {
  // private member variable
  int y;
 
  public:
    // calling the constructor of Base class
    Derived(int i, int j): Base(i) {
      y = j;
    }
 
    // implementation of pure virtual function
    void fun() {
        cout << "x = " << x << ", y = " << y << '\n';
    }
};
 
int main(void) {
  // creating an object of Derived class
  Derived d(4, 5);

  // calling the fun() function of Derived class
  d.fun();

  // creating an object of Derived class using
  // a pointer of the Base class
  Base* ptr = new Derived(6, 7);

  // calling the fun() function using the pointer
  ptr->fun();
}

/*
An abstract class in C++ can also be defined 
using struct keyword.
*/

struct shapeClass {
    virtual void Draw()=0;
};