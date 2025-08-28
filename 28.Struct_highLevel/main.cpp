#include <iostream>
using namespace std;

struct Person{
    // üye değişkenler (varsayılan olarak public)
    string name;
    int age;
    // Parametreli Constructor
    Person(const string &n, int _age){
        name = n;
        age = _age;
    }

    void printInfo(){   
        cout << "Name: " << name << ", Age: " << age << endl;
    } 
};



int main(){
    Person p("Murat", 25);
    p.printInfo();

    return 0;
}