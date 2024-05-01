#include <iostream>
#include <string>
using namespace std;

// GoF

class Car {
  public:
    string motor;
    void drive() {
      cout << "It can drive!";
    }
};

int main() {
  Car ioniq5;
  ioniq5.motor = "Hybrid";

  Car ioniq6 = ioniq5;

  cout << ioniq6.motor; // Hybrid
}