// 🎯 Mini Project: Simple Bank System (OOP Based)
// ----------------------------------------------------------
// Demonstrates encapsulation, abstraction, and class methods.

#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    double balance;

public:
    Bank(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void showBalance() {
        cout << "Account Holder: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    Bank acc("NOOR", 5000);
    acc.showBalance();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.showBalance();
    return 0;
}
