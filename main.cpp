#include <iostream>
#include <string>
using namespace std;

// interface seperation principle

class Menu {
  public:
    string name;
    string category;

    Menu(string n, string c) {
      name = n;
      category = c;
    }
};

class Restaurant {
  public:
    Menu *menu;
};

int main() {
  Menu menu1("Stake", "Meat");
  Menu menu2("Potato Salad", "Vegan");
  Menu menu3("Tomato Soup", "Vegan");

  Restaurant restaurant;
}

