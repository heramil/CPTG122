/*
4. Define a class named Book with a title (title) and a price (price_). Implement a constructor,
a function discount(double percent) to reduce the price by a given percentage, and a function
print() to display the book information. In main(), create an object and test the discount function.
*/
#include <iostream>
#include <iomanip>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;
public:
    Book() = default;
    Book(std::string t, std::string a, double p) : title(t), author(a), price(p) {};
    void discount(double percent);
    void print() const;
};

void Book::discount(double percent) {
    if (percent <= 0) {
        std::cout << "Error: Invalid Input" << std::endl;
        return;
    }
    price -= price * (percent / 100);
}

void Book::print() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Discounted Price: $" << std::fixed << std::setprecision(2) << price << std::endl;
}

int main() {
    Book b1{"Animal Farm", "George Orwell", 12.00};
    Book b2{"Dune", "Frank Herbert", 10.99};
    Book b3{"A Game of Thrones", "George R.R. Martin", 21.00};

    b1.discount(46.0);
    b2.discount(36.0);
    b3.discount(52.0);

    b1.print();
    std::cout << "\n";
    b2.print();
    std::cout << "\n";
    b3.print();

    return 0;
}
