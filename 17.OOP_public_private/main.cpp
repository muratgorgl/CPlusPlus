#include <iostream>
#include <stdio.h>
#include "Otomobil.h"

using namespace std;

int main(){
    Otomobil otomobil1("Kirmizi", "Ferrari", 1500);
    
    
    Otomobil otomobil2("Siyah", "Lamborghini", 2000);


    otomobil1.ruhsatBilgiGoster();
    cout << endl << endl;
    otomobil2.ruhsatBilgiGoster();


    cout << endl << endl << endl;

    cout << otomobil1.getOtomobilRenk() << endl;
    otomobil2.setOtomobilRenk("Lale");
    cout << otomobil2.getOtomobilRenk() << endl;

    cout << otomobil2.getOtomobilRenk() << endl;
    cout << otomobil2.getOtomobilModel() << endl;
    cout << otomobil2.getOtomobilBeygir() << endl;
}