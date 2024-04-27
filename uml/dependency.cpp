#include <iostream>
#include <string>
using namespace std;


// dependency

class Fuel {
  public:
    string type;
    int liters;
};

class Car {
  public:
    void drive(Fuel fuel) {
      cout << "bruhhh -";
    }
};

int main() {
  Fuel fuel;
  fuel.type = "Gasoline";
  fuel.liters = 30;

  Car car;
  car.drive(fuel);
}
