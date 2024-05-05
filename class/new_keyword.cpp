#include <iostream>
#include <string>
using namespace std;

/*
# Method 1 (using new)

Allocates memory for the object on the free store 
(This is frequently the same thing as the heap)
Requires you to explicitly delete your object later. 
(If you don't delete it, you could create a memory leak)
Memory stays allocated until you delete it. 
(i.e. you could return an object that you created using new)
The example in the question will leak memory unless the pointer is deleted; 
and it should always be deleted, regardless of which control path is taken, 
or if exceptions are thrown.

# Method 2 (not using new)

Allocates memory for the object on the stack (where all local variables go) 
There is generally less memory available for the stack; 
if you allocate too many objects, you risk stack overflow.
You won't need to delete it later.
Memory is no longer allocated when it goes out of scope. 
(i.e. you shouldn't return a pointer to an object on the stack)
As far as which one to use; you choose the method that works best for you, 
given the above constraints.

# Some easy cases:

If you don't want to worry about calling delete, 
(and the potential to cause memory leaks) you shouldn't use new.
If you'd like to return a pointer to your object from a function, 
you must use new
*/

class Car {
  public:
    void drive() {
      cout << "driving a car";
    }
};

int main() {
  Car *car = new Car();

  car->drive();

  delete car;
}
