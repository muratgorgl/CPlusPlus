#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int arr[2][3] = {{17,42,43},
                    {43,52,96}};
    for(int i=0 ; i<2 ; i++){
        cout << endl;
        for(int j=0 ; j<3 ; j++){
            cout << arr[i][j] << " ";
        }
    }
}