#include "Otomobil.h"

// Otomobil Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygir, int kp){
    cout << "Constructors cagirildi" << endl;
    renk = _renk;
    model = _model;
    beygir = _beygir;
    pKapiSayisi = new int(kp); // = *pKapiSayisi= kp;
}

Otomobil::~Otomobil(){
    cout << Otomobil::model << " Destructors cagirildi" << endl;
}


void Otomobil::ruhsatBilgiGoster(){
    cout << "Model: " << Otomobil::model << endl;
    cout << "Renk: " << Otomobil::renk << endl;
    cout << "Beygir Gucu: " << Otomobil::beygir << endl;
    cout << "Kapi Sayisi: " << *(Otomobil::pKapiSayisi) <<endl;
}

void Otomobil::setOtomobilRenk(string _renk){
    renk = _renk;
}

string Otomobil::getOtomobilRenk(){
    return renk;
}

void Otomobil::setOtomobilModel(string _model){
    model = _model;
}

string Otomobil::getOtomobilModel(){
    return model;
}

void Otomobil::setOtomobilBeygir(int _beygir){
    beygir = _beygir;
}

int Otomobil::getOtomobilBeygir(){
    return beygir;
}