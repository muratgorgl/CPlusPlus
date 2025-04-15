#include <stdio.h>
#include <iostream>

using namespace std;

void degistir(int& deger){
    deger = deger * 2;
    cout << "fonksiyonun icindeki deger: " << deger << endl;

}

int main(){
    int sayi = 5;
    degistir(sayi);
    cout << "sayi: " << sayi;
    return 0;
}