#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;


class Animal {

  // Access specifier
  public: 
    // Public attribute
    std::string name; 

  /*
    No need of contructor or functions 
    since name attribute can be accesed outside the class
  */
};


class Person {

  // Access specifier
  private: 
    // Private attribute of type string
    std::string name; 
    // Private attribute of type int
    int age; 
    // Private attribute of type Animal (class)
    Animal pet; 

  public:

  /*
    class constructor need to has the same name of the class "Person"

    this constructor takes 3 parameters and 
    initialize the attribute values with those parameters.
  */

  Person(std::string name, int age, Animal pet) : name{name}, age{age}, pet{pet} {}

  /* setter */
  void setName(const std::string &name) {
    this->name = name;
  }

  /* getter */
  const std::string &getName() const {
    return name;
  }
};


int main() {

  Animal dog;
  // allowed cause name attribute on class Animal if public
  dog.name = "Fluffy"; 

  // constructor call
  Person p = Person("nick", 25, dog); 
  // now person name changed from nick to mike
  p.setName("mike");                  

  // Not allowed, name attribute on class Person is private
  p.name = "alex"; 
}