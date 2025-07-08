#include <stdio.h>
#include <iostream>
#include "Otomobil.h"

using namespace std;

int main(){
    Otomobil otomobil1, otomobil2;

    otomobil1.model = "Audi";
    otomobil1.renk = "kirmizi";
    otomobil1.beygirGucu = 500;

    otomobil2.model = "BMW";
    otomobil2.renk = "Siyah";
    otomobil2.beygirGucu = 1000;

    otomobil1.ruhsatBilgiGoster();
    cout << endl << endl;
    otomobil2.ruhsatBilgiGoster();

    return 0;
}