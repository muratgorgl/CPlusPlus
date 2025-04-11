#include <stdio.h>
#include <iostream>

using namespace std;

void arrayPlus(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        arr[i] = arr[i] + 1;
    }

}



int main(){
    int arr[] = {1,2,3,4,5,6,7};
    arrayPlus(arr, 7);
    for(int i=0 ; i<7 ; i++){
        cout << arr[i] << ", ";
    }


}