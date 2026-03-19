#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    queue<string> customers;

    customers.push("Daisy");
    customers.push("Elijah");
    customers.push("Enoch");
    customers.push("Koby");

    while (!customers.empty()) {
        cout << "Serving: " << customers.front() << "\n";
        customers.pop();
    }

    return 0;
}
