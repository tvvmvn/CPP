#include <iostream>
#include <string>
using namespace std;


/*
If you don't want to worry about calling delete, 
(and the potential to cause memory leaks) you shouldn't use new.
If you'd like to return a pointer to your object from a function, 
you must use new
*/


class Car {
  public:
    void drive() {
      cout << "driving a car";
    }
};

int main() {
  Car *car = new Car();

  car->drive();

  delete car;
}


/*
abstract class and new keyword
*/


class Car {
  public:
    virtual void about() = 0;
};

class Avante : public Car {
  public:
    void about() {
      cout << "The car is Hyundai Avante";
    }
};

int main() {
  // abstract class as type
  Car* avante = new Avante();

  avante->about(); // The car is Hyundai Avante

  delete avante;
}