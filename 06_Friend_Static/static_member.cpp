// 📘 Topic: Static Data Members & Functions
// ----------------------------------------------------------
// Static members are shared among all objects of a class.

#include <iostream>
using namespace std;

class Student {
public:
    static int count; // Static data member
    string name;

    Student(string n) {
        name = n;
        count++;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static member
int Student::count = 0;

int main() {
    Student s1("Ali");
    Student s2("Sara");
    Student s3("Umar");

    Student::showCount(); // Accessed without an object
    return 0;
}
