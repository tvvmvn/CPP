#include <iostream>
#include <string>
using namespace std;


/*
Constructor
*/


class Beer {
  public:
    string name;
    string origin;
    bool available;

  Beer(string a, string b, bool c) {
    name = a;
    origin = b;
    available = c;
  }
};

int main() {
  Beer irishBeer("Guinness", "Ireland", false);
  Beer dutchBeer("Heineken", "Netherlands", true);

  cout << irishBeer.name << " " << irishBeer.origin << "\n";
  cout << dutchBeer.origin << " " << irishBeer.origin;

  return 0;
}


/*
Constructor with inheritance 
*/


class Person {
  public:
    string lastName;

    Person(string a): lastName(a) {};
};

class Professor : public Person {
  public:
    string major;

    Professor(string a, string b): Person(a), major(b) {}

    void about() {
      cout << "Mr." + lastName + " is teaching " + major;
    }
};

int main() {
  Professor john("Doe", "Mathematics");

  john.about(); // Mr.Doe is teaching Mathematics
}