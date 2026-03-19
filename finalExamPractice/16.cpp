#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores {98, 77, 81, 64, 88, 90, 73};

    cout << "List before reverse: ";
    for (const int s : scores) {
        cout << s << " ";
    }

    reverse(scores.begin(), scores.end());
    cout << "\n";

    cout << "List after reverse: ";
    for (const int s : scores) {
        cout << s << " ";
    }

    return 0;
}
