#include <iostream>
#include <string>
using namespace std;

// Legacy Printer (Adaptee)
class LegacyPrinter {
  public:
    void print(const string &text) {
      cout << "Command: " << text << endl;
    }
};

// Modern Computer (Client)
class ModernComputer {};

// Adapter to make the LegacyPrinter compatible with ModernComputer
class PrinterAdapter {
  private:
    LegacyPrinter legacyPrinter;

  public:
    void sendCommand(const string &command) {
      // Convert the command to uppercase and pass it to the LegacyPrinter
      string uppercaseCommand = command;
      
      for (char &c : uppercaseCommand) {
        c = toupper(c);
      }

      legacyPrinter.print(uppercaseCommand);
    }
};

int main() {
  PrinterAdapter adapter;

  adapter.sendCommand("Print this");

  return 0;
}