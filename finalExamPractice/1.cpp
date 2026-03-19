#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber = 0;
    double balance = 0.00;
    string name = "";
public:
    BankAccount() = default;
    BankAccount(int aN, double b, string n) : accountNumber(aN), balance(b), name(n) {};
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
};

void BankAccount::deposit(double amount) {
    if (amount > 0) balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount <= 0) return;
    if (amount > balance) {
        cout << "Error: Insufficient Funds." << endl;
        return;
    }
    balance -= amount;
}

void BankAccount::display() const {
    cout << "Name: " << name << endl;
    cout << "Account #" << accountNumber << endl;
    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
}

int main() {
    BankAccount u1 {101995, 49.99, "John Doe"};

    u1.display();
    u1.withdraw(24.99);
    cout << "\n";
    u1.display();
    u1.deposit(32.00);
    cout << "\n";
    u1.display();
    return 0;
}
