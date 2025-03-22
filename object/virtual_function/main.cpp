#include <iostream>
#include <string>
using namespace std;

class Animal {
  public:
    virtual string sound() = 0;
};

class Dog : public Animal {
  public:
    string sound() {
      return "bow wow";
    }
};

int main() {

}