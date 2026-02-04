#include <iostream>
using namespace std;

template <typename... T>
bool validateExpense(double b, T... values) {
    return ((values > 0) && ...) && ((... + values) <= b);
}

int main() {
    if (validateExpense(4000, 999.00, 453.23, 4842.0, 3.0)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}
