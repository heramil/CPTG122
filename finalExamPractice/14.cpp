#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<int> temperatures {98, 98, 89, 86, 86, 91, 88};
    double sum = 0;

    for (const int t : temperatures) {
        sum += t;
    }

    double average = sum / temperatures.size();
    cout << "Weekly Average Temperature: " << fixed << setprecision(2) << average << "\n";

    return 0;
}
