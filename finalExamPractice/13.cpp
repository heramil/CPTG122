#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("scores.txt");
    out << 98 << endl;
    out << 77 << endl;
    out << 81 << endl;
    out.close();

    ifstream in("scores.txt");

    if (!in) {
        cerr << "Error: Invalid file." << endl;
        return 1;
    }

    int score, count = 0;

    while (in >> score) {
        if (score >= 60) count++;
    }
    
    in.close();

    cout << "Scores >= 60: " << count << endl;

    return 0;
}
