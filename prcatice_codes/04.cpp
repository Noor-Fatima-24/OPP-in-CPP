#include <iostream>
using namespace std;

class Box {
private:
    int A1[2][2];  // 2x2 first matrix
    int A2[2][2];  // 2x2 second matrix
    int A3[2][2];  // 2x2 sum matrix

public:
    void input() {
        cout << "Enter values in 1st matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int n = 0; n < 2; n++) {
                cin >> A1[i][n];
            }
        }

        cout << "Enter values in 2nd matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int n = 0; n < 2; n++) {
                cin >> A2[i][n]; // ✅ corrected here
            }
        }
    }

    void sum() {
        for (int i = 0; i < 2; i++) {
            for (int n = 0; n < 2; n++) {
                A3[i][n] = A1[i][n] + A2[i][n];
            }
        }
    } // ✅ added missing brace

    void display() {
        cout << "\nSum of given matrices:\n";
        for (int i = 0; i < 2; i++) {
            for (int n = 0; n < 2; n++) {
                cout << A3[i][n] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Box obj;
    obj.input();
    obj.sum();
    obj.display();
    return 0;
}
