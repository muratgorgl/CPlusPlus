#include <iostream>
#include "Ogrenci.h"

using namespace std;

class Hesaplayici{
    public:
        void ortHesapla(Ogrenci ogrenci){
            int ortalama = (ogrenci.not1+ogrenci.not2) / 2;
            cout << ogrenci.ad << " adli ogrencinin not ortalamasi: " << ortalama << endl;
        }
};

int main(){
    Ogrenci ogrenci("Murat", 100, 60);
    Ogrenci ogrenci2("Ali", 40, 72);
    Ogrenci ogrenci3("Veli", 10, 47);
    Hesaplayici hesaplayici;

    hesaplayici.ortHesapla(ogrenci);
    hesaplayici.ortHesapla(ogrenci2);
    hesaplayici.ortHesapla(ogrenci3);
}