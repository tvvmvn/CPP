#include <iostream>
#include <string>
using namespace std;

/*
A destructor is a special member function that is called 
when the lifetime of an object ends. 
The purpose of the destructor is to free the resources that 
the object may have acquired during its lifetime.

If we do not write our own destructor in class, 
the compiler creates a default destructor for us. 

The default destructor works fine unless we have dynamically allocated memory or pointer in class. 
When a class contains a pointer to memory allocated in the class, 
we should write a destructor to release memory before the class instance is destroyed. 
This must be done to avoid memory leaks.
*/

class Test {
  int id;

  public:
    Test(int id) {
      this->id = id;

      cout << "created for id: " << id << endl;
    }

    ~Test() {
      cout << "destroyed for id: " << id << endl;
    }
};

// driver code
int main() {
  Test t1 = {1};
  Test t2 = {2};
  Test t3 = {3};

  // Objects are destroyed in the reverse order of their creation.
  // created for id: 1
  // created for id: 2
  // created for id: 3
  // destroyed for id: 3
  // destroyed for id: 2
  // destroyed for id: 1

  return 0;
}