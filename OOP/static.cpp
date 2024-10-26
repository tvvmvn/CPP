#include <iostream>
#include <string>
using namespace std;


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
