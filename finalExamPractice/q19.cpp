#include <iostream>
#include <iomanip>
#include <string>
#include <utility>
using namespace std;

class Employee {
protected:
    string name;
public:
    Employee() : name("Unknown") {}
    Employee(string& n) : name(n) {};

    void setName(string value) {
        name = value;
    };
};

class Manager : public Employee {
private:
    double salary;
public:
    Manager() : salary(0.0) {};
    Manager(string n, double s) : Employee(n), salary(s) {};

    void setSalary(double amount) {
        salary += amount;
    };

    void print() const {
        cout << "Employee Info\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: $" << fixed << setprecision(2) << salary << "\n";
    };
};

int main() {
    Manager e1;
    e1.setName("John Smith");
    e1.setSalary(140000.00);
    e1.print();
    return 0;
}




