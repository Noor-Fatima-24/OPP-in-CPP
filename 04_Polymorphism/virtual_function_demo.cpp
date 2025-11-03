// 📘 Topic: Virtual Function (Run-time Polymorphism)
// ----------------------------------------------------------
// Virtual functions allow dynamic method binding using pointers.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->show();  // Calls Derived version (runtime binding)
    return 0;
}
