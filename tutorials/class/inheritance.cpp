#include <iostream>
#include <string>
using namespace std;

/*
  class inheritance 1
*/

class Person {
  public:
    string name;

    void introduceSelf() {
      cout << "Hi! I'm " + name + "\n";
    }
};

class Professor: public Person {
  public:
    string teaches;

    // polymorphism (overrides)
    void introduceSelf() {
      cout << "My name is " + name + ", and I will be your " + teaches + " professor.\n";
    }

    void grade(string paper) {
      int grade = 1;
      cout << grade << "\n";
    }
};

class Student: public Person {
  public:
    int year;
    
    // polymorphism (overrides)
    void introduceSelf() {
      cout << "Hi! I'm " + name + ", and I'm in year " + to_string(year) + ".\n"; 
    }

    int canStudyArchery() {
      return year > 1;
    }
};

int main() {
  Person giles;
  giles.name = "Giles";
  giles.introduceSelf();

  Professor walsh;
  walsh.name = "Walsh";
  walsh.teaches = "Psychology";
  walsh.introduceSelf();
  walsh.grade("my paper");

  Student summers;
  summers.name = "Summers";
  summers.year = 2;
  summers.introduceSelf();
  summers.canStudyArchery();
}

/*
  class inheritance 2
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

  void grade(string paper) {
    int grade = 1;
    
    cout << grade << "\n";
  }
};

class Student: public Person {
  private:
  int year;

  public:
  Student(string a, int b): Person(a) {
    year = b;
  }

  void introduceSelf() {
    cout << "Hi! I'm " + name + ", and I'm in year " << year << ".\n";
  }

  int canStudyArchery() {
    return year > 1;
  }
};

int main() {
  Professor walsh("Walsh", "Psychology");
  walsh.introduceSelf();
  walsh.grade("my paper");

  Student summers("Summers", 2);
  summers.introduceSelf();
}