// 📘 Topic: Encapsulation and Abstraction
// ----------------------------------------------------------
// Encapsulation: Bundling data and methods in one unit.
// Abstraction: Hiding internal details and showing only necessary parts.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Data hidden from outside

public:
    BankAccount(double initial) {
        balance = initial;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.showBalance(); // Only this function can access balance
    return 0;
}
