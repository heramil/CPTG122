#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("sales.txt");
    out << 4.99 << endl;
    out << 0.99 << endl;
    out << 1.99 << endl;
    out << 9.99 << endl;
    out.close();

    ifstream in("sales.txt");

    if (!in) {
        cerr << "Error: Invalid file." << endl;
        return 1;
    }

    double price, sum = 0;

    while (in >> price) {
        sum += price;
    }
    in.close();

    ofstream total("total.txt");
    total << "Total Sales: " << sum << endl;
    total.close();

    cout << "Total written to total.txt" << endl;

    return 0;
}
