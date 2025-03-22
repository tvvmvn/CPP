#include <iostream>
#include <string>
using namespace std;

class Beer {
  public:
    static string HISTORY;
    
    static void sound() {
      cout << "Cool";
    }
};

string Beer::HISTORY = "B.C 3000";

int main() {  
  cout << Beer::HISTORY << "\n";
  
  Beer::sound();
}
