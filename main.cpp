#include <iostream>
#include <string>
// date and time
#include <chrono>
#include <ctime>
// standard: namespace library
using namespace std; 
// math library is built-in

void f1() {
  throw 400;
}

void f2() {
  f1();
}

void f3() {
  f2();
}

int main() {
  f3();
}