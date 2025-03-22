#include <iostream>
#include <string>
using namespace std;

// Available in C++ (not in C)
void f(int &n) {
  n = 2025;
};

int main() {
  int n = 2024;

  cout << n << "\n"; // 2024

  f(n);

  cout << n; // 2025
}