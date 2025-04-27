#include <stdio.h>  
#include <iostream>

using namespace std;

struct Student{
    int id;
    string name;
    double average;
};

int main(){
    
    int n;
    cout << "How many elements will there be? ";
    cin >>n;
    cin.ignore();

    Student *students = new Student[n];

    for(int i = 0 ; i<n ; i++){
        cout << i+1 << ". Student ID: ";
        cin >> students[i].id;
        cin.ignore();

        cout << i+1 << ". Name: ";
        getline(cin,students[i].name);

        cout << i+1 << ". Average: ";
        cin >> students[i].average;
    }
    cout << "\n * * * Student Status * * *\n";
    for(int i=0;i<n;i++){
        cout << "Student ID: " << students[i].id
             << " Name: " << students[i].name
             << " Average: " << students[i].average << endl;
    }
    delete[] students;

    return 0;
}