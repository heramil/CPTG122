#include <iostream>
#include <iomanip>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;
public:
    Book() : title(""), author(""), price(0.00) {};
    Book(std::string t, std::string a, double p) : title(t), author(a), price(p) {};
    double discount(double percent);
    void print() const;
};

double Book::discount(double percent) {
    if (percent <= 0) {
        std::cout << "Error: Invalid Input" << std::endl;
    }
    return (price - (price * (percent/100)));
};


int main() {
    Book b1{"Animal Farm", "George Orwell", 12.00};
    Book b2{"Dune", "Frank Herbert", 10.99};
    Book b3{"A Game of Thrones", "George R.R. Martin", 21.00};

    std::cout << "Book #1 Discount Price: " << std::fixed << std::setprecision(2) << b1.discount(46.0) << std::endl;
    std::cout << "Book #2 Discount Price: " << std::fixed << std::setprecision(2) << b2.discount(36.0) << std::endl;
    std::cout << "Book #3 Discount Price: " << std::fixed << std::setprecision(2) << b3.discount(52.0) << std::endl;

    return 0;
};

/*
4. Define a class named Book with a title (title) and a price (price_). Implement a constructor,
a function discount(double percent) to reduce the price by a given percentage, and a function
print() to display the book information. In main(), create an object and test the discount function.
*/
