#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string name;

  Car operator+(Car car) {
    Car result;
    result.name = name + " " + car.name;

    return result;
  }
};

int main() {
  Car avante;
  Car xm3;
  Car both;

  avante.name = "Avante";
  xm3.name = "XM3";

  both = avante + xm3;

  cout << both.name; // Avante XM3
}