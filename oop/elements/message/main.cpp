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
  Person person;
  
  person.say(); // requirements from outside.
}