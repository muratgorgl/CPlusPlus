#include <stdio.h>
#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    double average;
};

int main(){
    Student *ptr = new Student;

    cout << "Student ID: ";
    cin >> ptr->id;
    cin.ignore();

    cout << "Student Name: ";
    getline(cin, ptr->name);

    cout << "Student Average: ";
    cin >> ptr->average;

    cout << ptr->id << " " << ptr->name << " " << ptr->average << endl; 
    delete ptr;

    return 0;
}