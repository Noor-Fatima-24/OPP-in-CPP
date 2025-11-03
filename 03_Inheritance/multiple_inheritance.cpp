// 📘 Topic: Multiple Inheritance
// --------------------------------------
// A class can inherit from more than one base class.

#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    void showA() {
        cout << "Class A function" << endl;
    }
};

// Base class 2
class B {
public:
    void showB() {
        cout << "Class B function" << endl;
    }
};

// Derived class inherits both A and B
class C : public A, public B {
public:
    void showC() {
        cout << "Class C function" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}
