#include <iostream>
#include <string>
using namespace std;

class Beer {
  public:
    static string HISTORY;
};

string Beer::HISTORY = "B.C 3000";

int main() {  
  cout << Beer::HISTORY << "\n";
}
