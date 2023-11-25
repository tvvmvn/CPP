// date and time
#include <chrono>
#include <ctime>
// math library is built on c++   


class Cat {
  public:
    string name;
    int age;
    string sound();
};

// string Cat::sound() {
//   return "Meow";
// }

int main() {
  Cat cat;

  cat.name = "Kitty";
  cat.age = 2;

  cout << cat.name << "\n";
  cout << cat.age << "\n";
  cout << cat.sound();

  return 0;
}

class Window {
  public:
    string onclick(string code) {
      return "Operation " + code;
    };
};

int main() {
  Window window;

  cout << window.onclick("A") << "\n";
  cout << window.onclick("B") << "\n";
  cout << window.onclick("C") << "\n";
}

void isPIN(int pin[]) {
  for (int i=0; i<4; i++) {
    cout << pin[i];
  }
}

int main() {
  int input[] = {1, 9, 8, 9};

  /*
  Pass Array to a Function
  
  when you call the function, 
  you only need to use the name of the array 
  when passing it as an argument
  */

  isPIN(input);
}

/*
Pass By Reference

In the examples from the previous page, 
we used normal variables when we passed parameters to a function. 
You can also pass a reference to the function. 

This can be useful when you need to change the value of the arguments:
*/


void swapNums(int &x, int &y) {
  x = x * 10;
  y = y * 10;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}