#include <iostream>
#include <string>
using namespace std;

void f(int arr[3]) {
  for (int i = 0; i < 3; i++)
    cout << i << endl;
}

int main() {

  int arr[3] = {10, 20, 30};

  f(arr);
}