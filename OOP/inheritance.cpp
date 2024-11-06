#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string brand = "Tesla";
};

int main() {
  Car myCar;
  myCar.honk();

  return 0;
}

