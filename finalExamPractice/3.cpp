#include <iostream>
using namespace std;

class ShoppingCart {
private:
    int count;
    double totalPrice;
public:
    ShoppingCart() : count(0), totalPrice(0.00) {};
    ShoppingCart(int c, double tP) : count(c), totalPrice(tP) {};
    void addItem(double price);
    double getTotal() const;
};

void ShoppingCart::addItem(double price) {
    if (price <= 0) {
        cout << "Error: Invalid Amount" << endl;
    }
    count++;
    totalPrice += price;
}

double ShoppingCart::getTotal() const {
    return totalPrice;
}

int main() {
    ShoppingCart cart1;

    cart1.addItem(4.99);
    cart1.addItem(9.99);
    cart1.addItem(17.38);

    cout << "Cart Total: $" << cart1.getTotal() << endl;
    return 0;
};

/*
3. Define a class named ShoppingCart to represent a shopping cart. The class should
contain the number of items count and the total price totalPrice. Implement a
constructor, a function addItem(double price) to add an item and update the total, and
a function getTotal() to return the total price. In main(), simulate adding multiple items
and display the final total
*/
