#include <iostream>
#include <string>
using namespace std;
#include <vector>

int main() {
  // Declaring a vector
  vector<int> v = {1, 2, 3};
  // Declaring an iterator
  vector<int>::iterator itr;


  // Accessing the elements without using iterators
  cout << "Without iterators = ";
  for (int i = 0; i < 3; ++i)
    cout << v[i] << " ";


  // Accessing the elements using iterators
  cout << "\nWith iterators = ";
  for (itr = v.begin(); itr != v.end(); ++itr)
    cout << *itr << " ";


  // Without iterators = 1 2 3
  // With iterators = 1 2 3
  return 0;
}