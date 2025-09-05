#include <iostream>
#include "Ogrenci.h"

using namespace std;

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNotu){
    id=_id;
    ad=_ad;
    sinavNotu=_sinavNotu;
}

int Ogrenci::getId(){
    return id;
}

string Ogrenci::getAd(){
    return ad;
}

int Ogrenci::getSinavNotu(){
    return sinavNotu;
}

void Ogrenci::setId(int _id){
    id=_id;
}

void Ogrenci::setAd(string _ad){
    ad=_ad;
}

void Ogrenci::setSinavNotu(int _sinavNotu){
    sinavNotu=_sinavNotu;
}

void Ogrenci::ogrenciBilgiYazdir(){
    cout << "ID: " << id << " , Ad: " << ad << " , Sinav Notu: " << sinavNotu << endl;
}