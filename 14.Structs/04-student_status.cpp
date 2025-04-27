#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Student {
    int studentNo;
    string studentName;
    double studentGrade;
};

void printStudentStatus(Student &student) {
    if (student.studentGrade < 50) {
        cout << student.studentName << " failed the class!" << endl;
    } else {
        cout << student.studentName << " passed the class. Congratulations!" << endl;
    }
    student.studentNo = 190;
}

int main() {
    Student student = {621, "Murat Gorgulu", 88.8};
    printStudentStatus(student);
    cout << "\n\n" << student.studentName << "'s new school number: " << student.studentNo;

    return 0;
}