#include <iostream>
using namespace std;

class box {
private:
    int arr[10];

public:
    void input() {
        cout << "Enter 10 numbers in ascending order:\n";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "\nYou entered:\n";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void binarySearch() {
        int s = 0, e = 9, tar, mid, flag = 0;
        cout << "\nEnter target to find: ";
        cin >> tar;

        while (s <= e) {
            mid = (s + e) / 2;

            if (tar == arr[mid]) {
                cout << "Number found at position " << mid + 1 << endl;
                flag = 1;
                break; // stop searching
            } 
            else if (tar > arr[mid]) {
                s = mid + 1;
            } 
            else {
                e = mid - 1;
            }
        }

        if (flag == 0) {
            cout << "Number not found in the array." << endl;
        }
    }
};

int main() {
    box bag;
    bag.input();
    bag.display();
    bag.binarySearch();
    return 0;
}