#include <iostream>
#include <string>
using namespace std;


class Singleton {
  public:
    // Static method to access the singleton instance
    static Singleton &getInstance() {
      // If the instance doesn't exist, create it
      if (!instance) {
        instance = new Singleton();
      }

      return *instance;
    }

    // Public method to perform some operation
    void someOperation() {
      cout << "Singleton is performing some operation." << endl;
    }

    // Delete the copy constructor and assignment operator
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

  private:
    // Private constructor to prevent external instantiation
    Singleton() {
      cout << "Singleton instance created." << endl;
    }

    // Private destructor to prevent external deletion
    ~Singleton() {
      cout << "Singleton instance destroyed." << endl;
    }

    // Private static instance variable
    static Singleton *instance;
};

// Initialize the static instance variable to nullptr
Singleton *Singleton::instance = nullptr;

int main() {
  // Access the Singleton instance
  Singleton &singleton = Singleton::getInstance();

  // Use the Singleton instance
  singleton.someOperation();

  // Attempting to create another instance will not work
  // Singleton anotherInstance; // This line would not compile

  return 0;
}