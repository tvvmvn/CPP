#include <iostream>
#include <string>
using namespace std;


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
