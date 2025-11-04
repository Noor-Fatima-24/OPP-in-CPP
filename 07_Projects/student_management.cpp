// 🎯 Mini Project: Student Management System (OOP Based)
// ----------------------------------------------------------
// Demonstrates class, object, constructor, encapsulation, and file I/O.

#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student("NOOR", 1, 85.5));
    students.push_back(Student("MARYAM", 2, 90.2));
    students.push_back(Student("FATIMA", 3, 78.9));

    cout << "📘 Student List:\n";
    for (auto &s : students)
        s.display();

    return 0;
}
