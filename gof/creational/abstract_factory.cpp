#include <iostream>
#include <string>
using namespace std;

/*
It provides an interface for creating families of related or 
dependent objects without specifying their concrete classes.
*/

// Abstract Product Interface
class Pizza {
  public:
    virtual void bake() = 0;
    virtual void cut() = 0;
    virtual void box() = 0;
};

// Concrete New York Cheese Pizza
class NewYorkCheesePizza : public Pizza {
  public:
    void bake() override {
      cout << "Baking New York-style cheese pizza." << endl;
    }

    void cut() override {
      cout << "Cutting New York-style cheese pizza." << endl;
    }

    void box() override {
      cout << "Boxing New York-style cheese pizza." << endl;
    }
};

// Concrete New York Pepperoni Pizza
class NewYorkPepperoniPizza : public Pizza {
  public:
    void bake() override {
      cout << "Baking New York-style pepperoni pizza." << endl;
    }

    void cut() override {
      cout << "Cutting New York-style pepperoni pizza." << endl;
    }

    void box() override {
      cout << "Boxing New York-style pepperoni pizza." << endl;
    }
};

// Concrete Chicago Cheese Pizza
class ChicagoCheesePizza : public Pizza {
  public:
    void bake() override {
      cout << "Baking Chicago-style cheese pizza." << endl;
    }

    void cut() override {
      cout << "Cutting Chicago-style cheese pizza." << endl;
    }

    void box() override {
      cout << "Boxing Chicago-style cheese pizza." << endl;
    }
};

// Concrete Chicago Pepperoni Pizza
class ChicagoPepperoniPizza : public Pizza {
public:
  void bake() override {
    cout << "Baking Chicago-style pepperoni pizza." << endl;
  }

  void cut() override {
    cout << "Cutting Chicago-style pepperoni pizza." << endl;
  }

  void box() override {
    cout << "Boxing Chicago-style pepperoni pizza." << endl;
  }
};

// Abstract Factory Interface
class PizzaFactory {
  public:
    virtual Pizza *createCheesePizza() = 0;
    virtual Pizza *createPepperoniPizza() = 0;
};

// Concrete New York Pizza Factory
class NewYorkPizzaFactory : public PizzaFactory {
  public:
    Pizza *createCheesePizza() override {
      return new NewYorkCheesePizza();
    }

    Pizza *createPepperoniPizza() override {
      return new NewYorkPepperoniPizza();
    }
};

// Concrete Chicago Pizza Factory
class ChicagoPizzaFactory : public PizzaFactory {
  public:
    Pizza *createCheesePizza() override {
      return new ChicagoCheesePizza();
    }

    Pizza *createPepperoniPizza() override {
      return new ChicagoPepperoniPizza();
    }
};

int main() {
  // Create a New York Pizza Factory
  PizzaFactory *newYorkFactory = new NewYorkPizzaFactory();
  Pizza *newYorkCheesePizza = newYorkFactory->createCheesePizza();
  Pizza *newYorkPepperoniPizza = newYorkFactory->createPepperoniPizza();

  // Create a Chicago Pizza Factory
  PizzaFactory *chicagoFactory = new ChicagoPizzaFactory();
  Pizza *chicagoCheesePizza = chicagoFactory->createCheesePizza();
  Pizza *chicagoPepperoniPizza = chicagoFactory->createPepperoniPizza();

  // Order and prepare the pizzas
  newYorkCheesePizza->bake();
  newYorkCheesePizza->cut();
  newYorkCheesePizza->box();

  newYorkPepperoniPizza->bake();
  newYorkPepperoniPizza->cut();
  newYorkPepperoniPizza->box();

  chicagoCheesePizza->bake();
  chicagoCheesePizza->cut();
  chicagoCheesePizza->box();

  chicagoPepperoniPizza->bake();
  chicagoPepperoniPizza->cut();
  chicagoPepperoniPizza->box();

  // Clean up
  delete newYorkFactory;
  delete newYorkCheesePizza;
  delete newYorkPepperoniPizza;
  delete chicagoFactory;
  delete chicagoCheesePizza;
  delete chicagoPepperoniPizza;

  return 0;
}