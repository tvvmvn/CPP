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
    string name;

    Person(string a) {
      name = a;
    };

    void introduceSelf() {
      cout << "Hi! I', " + name + "\n";
    }
};

class Professor: public Person {
  public:
    string teaches;

    Professor(string a, string b): Person(a) {
      teaches = b;
    }

    void introduceSelf() {
      cout << "My name is " + name + ", and I will be your " + teaches + " professor.\n";
    }
};

class Student: public Person {
  private:
    int year;

  public:
    Student(string a, int b): Person(a) {
      year = b;
    };

    void introduceSelf() {
      cout << "Hi! I'm " + name + ", and I'm in year " << year << ".\n";
    }
};

int main() {
  Professor walsh("Walsh", "Psychology");
  walsh.introduceSelf();

  Student summers("Summers", 2);
  summers.introduceSelf();
}