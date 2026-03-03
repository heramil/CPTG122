#include <iostream>
using namespace std;

int sumValues(int* arr, int n) {
    int sum = 0;
    int* temp = arr;
    for (int i = 0; i < n; i++) {
        sum += *temp;
        temp++;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter an integer for n: ";
    cin >> n;

    int* arr= new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter an integer for arr[" << i + 1 << "]: ";
        cin >> *(arr + i);
    }

    int result = sumValues(arr, n);
    cout << "The total sum is: " << result << endl;

    delete[] arr;
    return 0;
}
