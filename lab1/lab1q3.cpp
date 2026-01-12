/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Student Exams
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/10/2026 15:07 P.M.
*/
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int examScores[4];
};

struct Course {
    Student students[20];
};

int main() {
    Course course;

    course.students[0].name = "Alice";
    course.students[0].examScores[0] = 78;
    course.students[0].examScores[1] = 85;
    course.students[0].examScores[2] = 90;
    course.students[0].examScores[3] = 88;

    cout << "Student Name: " << course.students[0].name << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Exam " << (i+1) << ": " << course.students[0].examScores[i] << endl;
    }

    return 0;
}
