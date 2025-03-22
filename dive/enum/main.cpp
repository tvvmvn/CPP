#include <iostream>
#include <string>
using namespace std;

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level lev = MEDIUM;

  cout << lev;
   
  return 0;
}