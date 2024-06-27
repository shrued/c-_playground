// Compile-time Polymorphism (Static Polymorphism) - Resolved during compilation. Function overloading. Fast.

// Achieved through function overloading and operator overloading.
// The decision of which function or operator to call is made at compile time.

#include <iostream>
using namespace std;

class Overload {
public:
    void display(int a) {
        cout << "Arguments: " << a << endl;
    }
    
    void display(string a) {
        cout << "Arguments: " << a << endl;
    }
};

int main() {
    Overload obj;
    obj.display(10);
    obj.display("Hello");
    return 0;
}

// Runtime Polymorphism (Dynamic Polymorphism) - Resolved during runtime. Function overriding. Flexible.

// Achieved through virtual functions.
// The decision of which function to call is made at runtime based on the object's actual type.
// Uses inheritance.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    myDog->sound(); // Outputs: Dog barks
    delete myDog;
    return 0;
}
