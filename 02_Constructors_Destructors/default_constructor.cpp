// 📘 Topic: Default Constructor
// --------------------------------------
// A constructor is a special function that runs automatically 
// when an object is created.
// Default constructor has no parameters.

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int model;

    // Default constructor
    Car() {
        brand = "Toyota";
        model = 2022;
    }

    void show() {
        cout << "Brand: " << brand << "\nModel: " << model << endl;
    }
};

int main() {
    Car c1;  // Default constructor is called automatically
    c1.show();

    return 0;
}
