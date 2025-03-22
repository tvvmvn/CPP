#include <iostream>
#include <string>
using namespace std;

int main() {
  int n = 2;
  int &r = n;

  cout << n << endl;
  cout << r << endl;
  cout << &r << endl;
};