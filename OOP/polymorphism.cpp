#include <iostream>
#include <string>
using namespace std;

// Abstract method: sound
class Animal {
  public:
    virtual string sound() = 0;
};

// Each derived class can implement different form of sound.
class Pig : public Animal {
  public:
    string sound() {
      return "wee wee";
    }
};

class Dog : public Animal {
  public:
    string sound() {
      return "bow wow";
    }
};

int main() {
  Pig pig;
  Dog dog;
  
  cout << "Pigs: " + pig.sound() << endl;
  cout << "Dogs: " + dog.sound();
  
  return 0;
}


/*
Output

Pigs: wee wee
Dogs: bow wow
*/
