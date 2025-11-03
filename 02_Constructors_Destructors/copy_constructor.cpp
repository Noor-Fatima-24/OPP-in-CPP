// 📘 Topic: Copy Constructor
// --------------------------------------
// Copy constructor creates a new object 
// as a copy of an existing object.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("NOOR FATIMA",18);
    Student s2 = s1; // Copy constructor called

    s2.show();

    return 0;
}
