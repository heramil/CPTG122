#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum = 0, double bal = 0.0)
        : accountNumber(accNum), balance(bal) {
    }

    BankAccount operator+(double amount) const {
        return BankAccount(accountNumber, balance + amount);
    }

    friend BankAccount operator+(double amount, const BankAccount& acc) {
        return BankAccount(acc.accountNumber, acc.balance + amount);
    }

    bool operator==(const BankAccount& other) const {
        return this->balance == other.balance;
    }

    friend ostream& operator<<(ostream& os, const BankAccount& acc) {
        os << "Account #" << acc.accountNumber
            << " | Balance: $" << fixed << setprecision(2) << acc.balance;
        return os;
    }
};

int main() {
    BankAccount acc1(1001, 5000.0);
    BankAccount acc2(1002, 5500.0);

    BankAccount acc3 = acc1 + 500.0;
    BankAccount acc4 = 500.0 + acc1;

    cout << acc1 << endl;
    cout << acc3 << endl;
    cout << acc4 << endl;

    if (acc3 == acc2) {
        cout << "Balances are equal" << endl;
    }
    else {
        cout << "Balances are not equal" << endl;
    }

    return 0;
}
