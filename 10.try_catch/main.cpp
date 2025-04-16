#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int divisor, dividend;


    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    

    try
    {
        if (divisor == 0){
            throw 99;
        }
        int result = dividend / divisor;
        cout << "Your result: " << result;
    }
    catch(int errorCode)
    {
        cout << "The divisor must not be 0!";
    }
    
    return 0;    
}