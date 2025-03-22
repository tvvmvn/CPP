#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) { 
  return x + y;
} 

double add(double x, double y) { 
  return x + y;
}
  
int main() { 
  cout << add(1, 2) << endl; 
  cout << add(1.5, 2.0) << endl; 
} 