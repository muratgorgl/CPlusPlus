#include <stdio.h>
#include <iostream>

using namespace std;

// Updated variable and comment translations to English
struct Student {
    int studentNo;
    string name;
    double averageGrade;
};

int main() {
    Student student1;
    student1.studentNo = 621;
    student1.name = "Murat Gorgulu";
    student1.averageGrade = 99.9;

    Student student2 = {369, "Ahmet Yilmaz", 49.99};

    cout << "Student name: " << student1.name << ", Student number: " << student1.studentNo << ", Average grade: " << student1.averageGrade << endl;
    cout << "Student name: " << student2.name << ", Student number: " << student2.studentNo << ", Average grade: " << student2.averageGrade << endl;

    return 0;
}