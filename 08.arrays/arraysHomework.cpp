#include <stdio.h>
#include <iostream>

using namespace std;

double ortalamaHesapla(){

    const int SIZE = 4;
    int sinavNotlari[SIZE];
    double toplam = 0; // toplam değişkeninin türü double olmalı
    double sinavAgirlik[4] = {0.15, 0.15, 0.30, 0.40};

    for(int i = 0; i<SIZE; i++)
    {
        cout << "Not " << i+1  << ": ";
        cin >> sinavNotlari[i];
    }
    
    for(int i = 0 ; i<SIZE; i++){
        toplam += sinavNotlari[i] * sinavAgirlik[i];
    }
    double ortalama = toplam; // ortalama hesaplamasını döngü dışında yapın
    return ortalama;
}

int main()
{
    double ortalama = ortalamaHesapla();
    cout << "Ortalama: " << ortalama;
    return 0;
}