#include <iostream>
#include <string>
using namespace std;

void f(string greeting = "hello") {
  cout << greeting << endl;
}

int main() {
  f();
  f("halo");
  
  return 0;
}

