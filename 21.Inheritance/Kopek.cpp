#include "Kopek.h"


// Constructor
Kopek::Kopek(string ad) : Hayvan(ad){
    kopekSayisi++;
}

// Deconstructor
Kopek::~Kopek(){
    kopekSayisi--;
}

void Kopek::Havla(){
    cout << Hayvan::getIsim() << " havliyor.";
}