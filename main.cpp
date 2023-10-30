#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;

    Person(string a) {
      name = a;
    };
};

class Professor: public Person {
  public:
    string teaches;

  Professor(string teaches): Person(teaches)
}

int main() {
  // Person giles("Giles");
  // cout << giles.name;

  Professor walsh("Walsh");

  cout << walsh.name;
}