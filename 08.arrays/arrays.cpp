#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    dizi[0] = 12;
    dizi[1] = 85;
    dizi[2] = 45;
    dizi[3] = 78;
    dizi[4] = 96;

    double arr[] = {1.82,2,3.69,4,5.4,6,9,7,11};
    string mevsimler[] = {"ilkbahar", "yaz", "sonbahar","kis"};

    for(int i = 0; i<5; i++)
    {
        cout << dizi[i] << "  ";
    }

    cout << endl;

    for(int i = 0; i<9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    for(int i = 0; i<4; i++)
    {
        cout << mevsimler[i] << "  ";
    }
    cout << endl;
}