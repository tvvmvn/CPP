#include <iostream>
#include <string>
using namespace std;

class Suitcase {
  public:
    int size[];
};

int main() {
  Suitcase suitcase;
  suitcase.size[0] = 20;
  suitcase.size[1] = 24;
  suitcase.size[2] = 28;

  for (int i = 0; i < 3; i++) {
    cout << suitcase.size[i];
  }
}