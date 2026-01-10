/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Employee Records
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/09/2026 15:21 P.M.
*/

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int hoursWorked[5];
    int daysWorked;
};

int main() {
    Employee employee = {"Bob", {8, 8, 7, 9, 6}, 5};
    int totalHours = 0;

    for (int i = 0; i < employee.daysWorked; i++) {
        totalHours += employee.hoursWorked[i];
    }

    cout << "Employee: " << employee.name << endl;
    cout << "Total Hours: " << totalHours << endl;
    return 0;
};
