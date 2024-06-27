#include <iostream>
using namespace std;

// Abstract base class (interface)
class Animal {
public:
    // Pure virtual function (interface method)
    virtual void makeSound() = 0;
};

// Concrete class implementing Animal (Dog)
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Outputs: Woof!
    return 0;
}
