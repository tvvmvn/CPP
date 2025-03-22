#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
  private:
    int salary;
};

int main() {
  Person person;

  person.name = "John Doe";

  // person.salary = 1000; // error
}