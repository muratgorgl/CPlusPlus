#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int x = 5;
    int y = 7;

    int *ptr;       // Pointer is a structure that holds an address.
    ptr = &x;       // &: address of : address of 'x'         &x = address of variable x

    cout << "RAM address: " << ptr << endl;
    cout << "Number at RAM address: " << *ptr << endl;

    ptr = &y;
    cout << "Y RAM address: " << ptr << endl;
    cout << "Number at Y RAM address: " << *ptr << endl;

    *ptr = 18;
    cout << "Modified value of Y: " << *ptr << endl;

}