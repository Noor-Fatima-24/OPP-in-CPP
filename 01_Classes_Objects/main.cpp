/*
📘 Topic: Classes & Objects in C++
--------------------------------------
A class is a blueprint for creating objects.
It defines data members (variables) and member functions (methods).
An object is an instance of a class.
*/

#include <iostream>
using namespace std;

// Defining a class named Student
class Student {
public:
    string name;
    int age;

    // Member function to display info
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student s1;

    // Assigning values to object data members
    s1.name = "NOOR FATIMA";
    s1.age = 18;

    // Calling member function
    s1.display();

    return 0;
}
