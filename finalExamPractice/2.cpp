#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name = "";
    int score1 = 0, score2 = 0, score3 = 0;
public:
    Student() = default;
    Student(string n, int s1, int s2, int s3) : name(n), score1(s1), score2(s2), score3(s3) {};
    int average() const;
    void print() const;
};

int Student::average() const {
    return (score1 + score2 + score3) / 3;
}

void Student::print() const {
    cout << "Name: " << name << endl;
    cout << "Exam #1: " << score1 << endl;
    cout << "Exam #2: " << score2 << endl;
    cout << "Exam #3: " << score3 << endl;
    cout << "Student Exam Average: " << average() << endl;
}

int main() {
    Student s1 {"Jane Doe", 45, 76, 81};
    Student s2 {"John Smith", 98, 98, 98};

    s1.print();
    cout << "\n";
    s2.print();
    return 0;
}

/*
2. Define a class named Student to represent a student. The class should contain the
student's name and three exam scores. Implement a constructor, a member function
average() to compute the average score, and a function print() to display the student
information and average. In main(), create multiple students and display their averages.
*/
