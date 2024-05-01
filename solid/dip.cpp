#include <iostream>
#include <string>
using namespace std;


/*
A class should rely on abstractions - interface or abstract class
rather than concrete implementations.
*/

// interface
class Animal {
  virtual string sound() = 0;
};

class Dog : public Animal {
  public:
    string sound() {
      return "Bark!";
    }
};