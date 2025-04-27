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
    Student student = {621, "Murat Gorgulu", 47.9};
    Student *ptr = &student;

    cout << "Student ID: " << ptr->id <<
            ", Student Name: " << ptr->name <<
            ", Student Average: " << ptr->average << endl;
}