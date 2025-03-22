#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    void say() {
      cout << "hello";
    }
};

int main() {
  // object creation with new keyword
  Person* person = new Person();

  person->say();

  // you should delete object created with new keyword.
  // (The compiler provides a default destructor).
  delete person;
}