#include <iostream>
#include <string>
using namespace std;


/*
Do not force any client to implement
an interface which is irrelavant to them.
*/


// fat interface
class Menu {
  virtual void readMeatMenu() = 0;
  virtual void readVeganMenu() = 0;
};

// specific interfaces
class VeganMenu {
  virtual void readMenu() = 0;
};

class MeatMenu {
  virtual void readMenu() = 0;
};

// implements
class Vegan : VeganMenu {
  void readMenu() {
    // ..
  }
};