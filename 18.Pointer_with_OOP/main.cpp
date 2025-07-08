#include <iostream>
#include <stdio.h>
#include "Otomobil.h"

using namespace std;

int main(){
    Otomobil otomobil1("Kirmizi", "Ferrari", 1500);
    otomobil1.ruhsatBilgiGoster();
    
    Otomobil otomobil2("Siyah", "Lamborghini", 2000);

    otomobil2.setOtomobilRenk("mavi");
    otomobil2.ruhsatBilgiGoster();

    // cout << endl<< endl << endl;

    // Otomobil *p;
    // p = &otomobil1;
    // p->ruhsatBilgiGoster();
    // cout << endl;

    // p=&otomobil2;
    // cout << p->getOtomobilModel();

    Otomobil *p = new Otomobil("Sari", "BMW",1250);
    p->setOtomobilBeygir(1251);
    p->ruhsatBilgiGoster();

} 