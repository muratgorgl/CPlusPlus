#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Student {
    int studentNo;
    string studentName;
    double studentGrade;
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". Student number: ";
        cin >> students[i].studentNo;
        cin.ignore();

        cout << i + 1 << ". Student name: ";
        getline(cin, students[i].studentName);

        cout << i + 1 << ". Student grade: ";
        cin >> students[i].studentGrade;
    }

    cout << "\n* * * Student List * * * \n";
    for (int i = 0; i < 3; i++) {
        cout << students[i].studentNo << "  " << students[i].studentName << "  " << students[i].studentGrade << endl;
    }

    return 0;
}