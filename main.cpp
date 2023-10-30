#include <iostream>
#include <string>
using namespace std;

/*
  function overloading
*/
  
int myMax(int x, int y) { 
  return (x > y) ? x : y; 
} 

float myMax(float x, float y) { 
  return (x > y) ? x : y; 
}

char myMax(char x, char y) { 
  return (x > y) ? x : y; 
} 
  
int main() { 
  cout << myMax(3, 7) << endl; 

  cout << myMax(3.0, 7.0) << endl; 

  cout << myMax('g', 'e') << endl; 
} 