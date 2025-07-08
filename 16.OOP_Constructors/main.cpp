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

}