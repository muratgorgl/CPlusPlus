#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int matrix1[3][2];
    int matrix2[3][2];
    int matrixResult[3][2];
    cout << "First Matrix[3][2]: ";
    cin >> matrix1[0][0] >> matrix1[0][1] >> matrix1[1][0] >> matrix1[1][1] >> matrix1[2][0] >> matrix1[2][1];
    cout << "Second Matrix[3][2]: " << endl;    
    cin >> matrix2[0][0] >> matrix2[0][1] >> matrix2[1][0] >> matrix2[1][1] >> matrix2[2][0] >> matrix2[2][1];
    cout << "Sum of Matrices: " << endl;
    for(int i =0; i<3; i++){
        for(int j = 0; j<2; j++){
            matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrixResult[i][j] << " ";
        }
        cout << endl;
    }
    return 0;


}