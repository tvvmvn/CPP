#include <iostream>
#include <string>
using namespace std;


/*
Class and instances
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
