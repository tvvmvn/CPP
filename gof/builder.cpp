#include <iostream>
#include <string>
using namespace std;

// GoF

class Camera {};
class Battery {};
class Display {};

class Phone {
  public:
    Camera camera;
    Battery battery;
    Display display;
};

