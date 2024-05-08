#include <iostream>
#include <string>
using namespace std;
#include <vector>

/*
Vectors are the same as dynamic arrays with the ability 
to resize themselves automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. 

Vector elements are placed in contiguous storage 
so that they can be accessed and traversed using iterators.
*/

int main() {
  vector<int> g1;

  // Adds an element to the end of the vector.
  for (int i = 1; i <= 5; i++)
    g1.push_back(i * 10);


  // Accessing the elements using iterators
  cout << "Output of begin and end: ";
  for (auto itr = g1.begin(); itr != g1.end(); ++itr)
    cout << *itr << " ";

  return 0;
}