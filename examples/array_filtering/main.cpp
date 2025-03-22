#include <iostream>
#include <string>
using namespace std;

int main() {
  
  int ages[3] = {12, 24, 36};

  for (int i = 0; i < 3; i++) {
    if (ages[i] >= 18) {
      cout << ages[i];
    }
  }
}