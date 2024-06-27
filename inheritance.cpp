#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Some generic sound" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Outputs: Some generic sound
    myDog.bark();      // Outputs: Woof!
    return 0;
}
