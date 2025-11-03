// 📘 Topic: Single Inheritance
// --------------------------------------
// One class (child) inherits from another (parent).

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d1;
    d1.eat();   // Inherited function
    d1.bark();  // Own function
    return 0;
}
