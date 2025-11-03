// 📘 Topic: Function Overloading (Compile-time Polymorphism)
// ----------------------------------------------------------
// Same function name with different parameters.

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;
    cout << c.add(2, 3) << endl;
    cout << c.add(2.5, 3.7) << endl;
    cout << c.add(1, 2, 3) << endl;
    return 0;
}
