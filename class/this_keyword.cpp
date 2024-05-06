#include <iostream>
#include <string>

using namespace std;

class Car {

  public:
    string name;

    Car(string name) {
      // When local variable’s name is same as member’s name
      this->name = name;
    }
};

int main() {
  Car car = {"Avante"};

  cout << car.name; // Avante
}