#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string name;

  Car operator+(Car const &car) {
    Car result;
    result.name = name + " " + car.name;

    return result;
  }

  void print() {
    cout << name;
  }
};

int main() {
  Car avante;
  Car xm3;
  Car both;

  avante.name = "Avante";
  xm3.name = "XM3";

  both = avante + xm3;

  both.print(); // Avante XM3
}