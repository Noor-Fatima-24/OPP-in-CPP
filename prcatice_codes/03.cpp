#include <iostream>
using namespace std;

class Frequency {
private:
    int arr[10];

public:
    void input() {
        cout << "Enter 10 numbers:\n";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void displayFrequency() {
        cout << "\nValue\tCount\n";
       

        for (int i = 0; i < 10; i++) {
            int count = 0;

            // Count how many times arr[i] appears in the entire array
            for (int j = 0; j < 10; j++) {
                if (arr[i] == arr[j])
                    count++;
            }

            // Now check if this number appeared before index i
            int repeat = 0;
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k])
                    repeat = 1;
            }

            // Only display if it's appearing the first time
            if (repeat == 0)
                cout << arr[i] << "\t" << count << endl;
        }
    }
};

int main() {
    Frequency obj;
    obj.input();
    obj.displayFrequency();
    return 0;
}
