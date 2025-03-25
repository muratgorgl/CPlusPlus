#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int arr[4];
    cout << "Please Enter The Array: " << endl;
    for(int i = 0; i<4; i++){
        cin >> arr[i];
    }

    cout << "Your Array is changed: " << endl;
    for(int i = 3; i>=0 ; i--){
        cout << arr[i] << " ";
    }

}