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
        cout << " Status: " << "failed the class!" << endl;
    } else {
        cout << " Status: " << "passed the class. Congratulations!" << endl;
    }
}

void printAllStudentsStatus(Student students[], int size) {
    cout << "\n* * Student Status * *\n";

    for (int i = 0; i < size; i++) {
        cout << students[i].studentNo << "  " << students[i].studentName << "  " << students[i].studentGrade;
        printStudentStatus(students[i]);
    }
}

int main() {
    Student students[3] = {
        {621, "Murat Gorgulu", 89.9},
        {124, "Ahmet Yilmaz", 48.7},
        {478, "Ayse Kara", 41.12}
    };

    printAllStudentsStatus(students, 3);
    return 0;
}