#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string model;
    string motor;
};

class KoreanCar : public Car {
  // no need to write again.
};

int main() {
  KoreanCar car;

  car.model = "XM3";
  car.motor = "Hybrid";

  cout << car.model + " " +  car.motor;
}

/*
Output

XM3 Hybrid
*/

