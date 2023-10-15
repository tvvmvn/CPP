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