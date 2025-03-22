#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    int age;

    Person(string n, int a) {
      name = n;
      age = a;
    }
};

int main() {
  Person person("John Doe", 30);
  
  cout << person.name << "\n";
  cout << person.age;
}