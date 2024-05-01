#include <iostream>
#include <string>
using namespace std;

// GoF

class CarInstruction {
  virtual void drive() = 0;
  virtual void brakd() = 0;
};

class CarFactory : public CarInstruction {
  void drive() {
    cout << "It can drive!";
  }

  void brake() {
    cout << "It can brake!";
  }
};

int main() {};