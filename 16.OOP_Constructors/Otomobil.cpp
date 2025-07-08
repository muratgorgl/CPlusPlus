#include "Otomobil.h"

// Otomobil Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygir){
    renk = _renk;
    model = _model;
    beygir = _beygir;
}

void Otomobil::ruhsatBilgiGoster(){
    cout << "Model: " << Otomobil::model << endl;
    cout << "Renk: " << Otomobil::renk << endl;
    cout << "Beygir Gucu: " << Otomobil::beygir << endl;
}