#include <iostream>
#include <string>
using namespace std;

// Product class
class Computer {
  public:
    void setCPU(const string &cpu) {
      cpu_ = cpu;
    }

    void setMemory(const string &memory) {
      memory_ = memory;
    }

    void setStorage(const string &storage) {
      storage_ = storage;
    }

    void display() {
      cout << "CPU: " << cpu_ << endl;
      cout << "Memory: " << memory_ << endl;
      cout << "Storage: " << storage_ << endl;
    }

  private:
    string cpu_;
    string memory_;
    string storage_;
};

// Builder interface
class ComputerBuilder {
  public:
    virtual void buildCPU(const string &cpu) = 0;
    virtual void buildMemory(const string &memory) = 0;
    virtual void buildStorage(const string &storage) = 0;
    virtual Computer getResult() = 0;
};

// Concrete Builder
class DesktopComputerBuilder : public ComputerBuilder {
  public:
    DesktopComputerBuilder() {
      computer_ = Computer();
    }

    void buildCPU(const string &cpu) override {
      computer_.setCPU(cpu);
    }

    void buildMemory(const string &memory) override {
      computer_.setMemory(memory);
    }

    void buildStorage(const string &storage) override {
      computer_.setStorage(storage);
    }

    Computer getResult() override {
      return computer_;
    }

  private:
    Computer computer_;
};

// Director
class ComputerAssembler {
  public:
    Computer assembleComputer(ComputerBuilder &builder) {
      builder.buildCPU("Intel i7");
      builder.buildMemory("16GB");
      builder.buildStorage("512GB SSD");
      return builder.getResult();
    }
};

int main() {
  DesktopComputerBuilder desktopBuilder;
  ComputerAssembler assembler;
  Computer desktop = assembler.assembleComputer(desktopBuilder);

  cout << "Desktop Computer Configuration:" << endl;
  desktop.display();

  return 0;
}