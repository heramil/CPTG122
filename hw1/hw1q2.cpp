/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Library Collection
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/09/2026 15:10 P.M.
*/

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string authorsName;
    int availableCopies;
};

int main() {
    Book book[15];
    book[0] = {"Data Structures in C++", "Mark Weiss", 5};

    cout << "Title: " << book[0].title << endl;
    cout << "Author: " << book[0].authorsName << endl;
    cout << "Available Copies: " << book[0].availableCopies << endl;

    return 0;
};
