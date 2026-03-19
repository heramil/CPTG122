#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> book;

    book.push("Animal Farm");
    book.push("A Game of Thrones");
    book.push("Dune");

    while (!book.empty()) {
        cout << book.top() << "\n";
        book.pop();
    };

    return 0;
}
