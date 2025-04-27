#include <stdio.h>
#include <iostream>

using namespace std;

struct Ogrenci{
    int ogrenciNo;
    string isim;
    double notOrtalamasi;
};

int main(){
    Ogrenci ogr;
    // 1. Yöntem
    ogr.ogrenciNo = 621;
    ogr.isim = "Murat Görgülü";
    ogr.notOrtalamasi = 99.9;

    // 2. Yöntem
    Ogrenci ogr2 = {369, "Ahmet Yilmaz", 49.99 };

    cout <<  "Öğrenci ismi: "<< ogr.isim << " , " << "Öğrenci numarasi: " <<ogr.ogrenciNo << " , " << "Öğrenci ortalamasi: " << ogr.notOrtalamasi << endl;
    cout <<  "Öğrenci ismi: "<< ogr2.isim << " , " << "Öğrenci numarasi: " <<ogr2.ogrenciNo << " , " << "Öğrenci ortalamasi: " << ogr2.notOrtalamasi << endl;

    return 0;
}