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

int main() {
  Vehicle car;
  car.honk();

  return 0;
}

