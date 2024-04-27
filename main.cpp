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
    Menu menu[3];
};

int main() {
  Menu menu1("Stake", "Meat");
  Menu menu2("Potato Salad", "Vegan");
  Menu menu3("Tomato Soup", "Vegan");

  Restaurant restaurant;
  restaurant.menu[0] = menu1;
  restaurant.menu[1] = menu2;
  restaurant.menu[2] = menu3;

  cout << restaurant.menu[0].name;
}

