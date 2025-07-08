#include <iostream>
#include <stdio.h>
#include "Otomobil.h"

using namespace std;

int main(){
    Otomobil otomobil1("Kirmizi", "Ferrari", 1500, 4);
    otomobil1.setOtomobilModel("Lacivert");
    cout << "Otomobil1 Kapi Sayisi: "<<*(otomobil1.pKapiSayisi) << endl<< endl;

    Otomobil otomobil2("Siyah", "Lamborghini", 2000, 4);

    otomobil2.ruhsatBilgiGoster();




    // cout << endl<< endl << endl;

    // Otomobil *p;
    // p = &otomobil1;
    // p->ruhsatBilgiGoster();
    // cout << endl;

    // p=&otomobil2;
    // cout << p->getOtomobilModel();

    Otomobil *p = new Otomobil("Sari", "BMW",1250, 2);
    cout << "BMW Kapi Sayisi: " << *(p->pKapiSayisi) << endl << endl;
    // p->setOtomobilBeygir(1251);
    p->ruhsatBilgiGoster();

    delete p; // Pointer'lar ile oluşturulan sınıfları mutlaka isiniz bittiğinde delete edin!!

    cout<<endl;
    cout << endl;

    return 0;

} 