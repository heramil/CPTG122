#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person() : name("Unknown") {}
    Person(string n) : name(n) {}

    void setName(string value) {
        name = value;
    }
};

class Student : public Person {
private:
    int score;
public:
    Student() : score(0.00) {};
    Student(string n, int s) : Person(n), score(s) {};

    void setScore(int value) {
        score += value;
    }

    void print() const {
        cout << "Student Info\n";
        cout << "Name: " << name << "\n";
        cout << "Score: " << score << "\n";
    }
};

int main() {
    Student s1;
    s1.setName("Jane Doe");
    s1.setScore(98);
    s1.print();
    return 0;
}
