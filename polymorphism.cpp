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


// Example
class A {
public:
    void fxn1() {
        std::cout << "A::fxn1" << std::endl;
    }
};

class B : public A {
public:
    void fxn1() {
        std::cout << "B::fxn1" << std::endl;
    }
};

int main() {
    A* test = new B();
    test->fxn1(); // Which function is called?
    return 0;
}

// Non-Virtual Functions:
// If fxn1 is not declared virtual in class A, the function call test->fxn1() will be resolved at compile time based on the static type of test, which is a pointer to A.

// Static Binding:
// Since test is of type A*, the compiler will bind the call to A::fxn1() regardless of the actual object type that test points to at runtime.
// This behavior is known as static or early binding.

// Example2:

class A {
public:
    virtual void fxn1() { // Declare fxn1 as virtual
        std::cout << "A::fxn1" << std::endl;
    }
};

class B : public A {
public:
    void fxn1() override { // Override fxn1 in derived class
        std::cout << "B::fxn1" << std::endl;
    }
};

int main() {
    A* test = new B();
    test->fxn1(); // Calls B::fxn1() because of virtual function
    delete test;
    return 0;
}

// Virtual Functions:
// Declaring fxn1 as virtual in class A and overriding it in class B allows dynamic binding (or late binding).

// Dynamic Binding:
// When fxn1 is called on a pointer of type A* that actually points to an object of type B, the call is resolved at runtime to B::fxn1().

