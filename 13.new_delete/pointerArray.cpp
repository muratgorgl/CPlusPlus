#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Please enter how many integers you will input: ";
    cin >> n;

    int *p = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Enter your " << i+1 << "th number: ";
        cin >> p[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }

    cout << "Sum: " << sum << endl;
    delete[] p;

    return 0;
}