#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int *p;
    p = NULL;

    if(p != NULL){
        *p = 120;
    }
    else{
        p = new int(120);
    }

    cout << *p << endl;

    return 0;
}