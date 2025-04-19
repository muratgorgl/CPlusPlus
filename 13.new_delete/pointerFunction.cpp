#include <stdio.h>
#include <iostream>

using namespace std;

int* function(){
    int *p = new int(78);
    return p;
}

int main(){
    int *ptr;
    ptr = function();

    if(ptr != NULL){
        cout << *ptr << endl;
        delete ptr;
    }
    return 0;
}