#include <iostream>
#include <string>
using namespace std;

// Legacy Printer (Adaptee)
class LegacyPrinter {
  public:
    void printInUppercase(const string &text) {
      cout << "Printing: " << text << endl;
    }
};

// Modern Computer (Client)
class ModernComputer {
  public:
    void sendCommand(const string &command) {
      cout << "Sending command: " << command << endl;
    }
};

// Adapter class to make the LegacyPrinter compatible with
// ModernComputer
class PrinterAdapter {
  private:
    LegacyPrinter legacyPrinter;

  public:
    void sendCommand(const string &command) {
      // Convert the command to uppercase and pass it to
      // the LegacyPrinter
      string uppercaseCommand = command;
      
      for (char &c : uppercaseCommand) {
        c = toupper(c);
      }

      legacyPrinter.printInUppercase(uppercaseCommand);
    }
};

int main() {
  ModernComputer computer;
  PrinterAdapter adapter;

  computer.sendCommand("Print this in lowercase");
  adapter.sendCommand("Print this in lowercase (adapted)");

  return 0;
}