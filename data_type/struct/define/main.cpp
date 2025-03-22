#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {

  Person person;
  person.name = "John Doe";
  person.age = 30;

  // cout << person;

  return 0;
}
