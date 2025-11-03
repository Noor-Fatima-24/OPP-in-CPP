// 📘 Topic: Friend Function
// ----------------------------------------------------------
// Friend functions can access private and protected data of a class.

#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) {
        width = w;
    }

    // Declaring friend function
    friend void showWidth(Box b);
};

// Friend function definition
void showWidth(Box b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box box1(20);
    showWidth(box1);
    return 0;
}
