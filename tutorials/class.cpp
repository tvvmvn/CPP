#include <iostream>
#include <string>
using namespace std;

/*
  Class

  1 basic
  2 constructor
  3 function member
  4 static member
*/


/*
  Basic
*/


class Beer {
  public:
    string name;
    string origin;
    bool available;
};

int main() {
  Beer irishBeer;
  irishBeer.name = "Guinness";
  irishBeer.origin = "Ireland";
  irishBeer.available = false;
  
  Beer dutchBeer;
  dutchBeer.name = "Heineken";
  dutchBeer.origin = "Netherlands";
  dutchBeer.available = true;

  cout << irishBeer.name << " " << irishBeer.origin << "\n";
  cout << dutchBeer.origin << " " << irishBeer.origin;
}


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
  function member
*/


class Beer {
  public:  
    string name;
    string origin;
    bool available;

    string sound() {
      return "Cool!";
    }
};

int main() {
  Beer irishBeer;

  cout << irishBeer.sound();
}


/*
  static member
*/


class Beer {
  public:
    static string HISTORY;
    static string brewing() {
      return "grains, hops, yeast and water";
    };
};

string Beer::HISTORY = "B.C 3000";

int main() {  
  cout << Beer::HISTORY << "\n";
  cout << Beer::brewing();
}


/*
  complete Beer class  
*/


class Beer {
  public:
    // memebers
    string name;
    string origin;
    bool available;

    // constructor
    Beer(string a, string b, bool c) {
      name = a;
      origin = b;
      available = c;
    }

    string sound() {
      return "Cool!";
    }

    // static members
    static string HISTORY;

    static string brewing() {
      return "grains, hops, yeast and water";
    };
};

string Beer::HISTORY = "B.C 3000";


/*
  class inheritance

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