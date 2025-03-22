#include <iostream>
#include <string>
using namespace std;


int main() {
  
  struct  {
    string name;
    int age;
  } person;

  person.name = "John Doe";
  person.age = 30;

  // cout << person;

  return 0;
}
