#include <iostream>
#include <string>
using namespace std;

int main() {
  int nums[] = {10, 20, 30};

  cout << sizeof(nums) / sizeof(nums[0]);
  
  return 0;
}
