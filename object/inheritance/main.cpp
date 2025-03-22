#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
};

class Student : public Person {
  public:
    int grade;
};

int main() {
  Student student;
  student.name = "John Doe";
  student.grade = 4;

  cout << student.name << endl;
  cout << student.grade;
}