#include <iostream>
using namespace std;

int main() {

  for (int i = 0; i < 5; i++) {

    if (i == 3) {
      continue;
    }

    cout << i << "\n";
  }
  
  return 0;
}
