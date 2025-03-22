#include <iostream>
using namespace std;

int main() {
  int i = 0;
  
  while (i < 5) {

    if (i > 3) {
      break;
    }

    cout << i << "\n";
    i++;
  }

  return 0;
}
