#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int arr[] = {12, 24, 36, 48, 60, 72, 84};
    int *p;
    p = arr;
    for(int i=0 ; i<7 ; i++){
        
        cout << "The RAM address of index " << i << " in the array: " << (p+i) << endl; 
        

        cout << "The value at index " << i << " in the array: " << *(p+i) << endl;
        *(p+i) = *(p+i) * *(p+i);

        
        cout << "The square of the value at index " << i << " in the array: " << *(p+i) << endl;
        cout << "***********************************" << endl;
        cout << endl;
        cout << endl; 
    } 

    return 0;
}