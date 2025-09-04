#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,double> mOgrenciNotlari;

    // ekleme
    mOgrenciNotlari[104] = 95.2;
    mOgrenciNotlari[103] = 54.1;
    mOgrenciNotlari[100] = 74.6;

    // insert kullanarak ekleme
    mOgrenciNotlari.insert({102, 12.2});

    // listeleme
    cout << "\nOgrenci Numaralari ve Not Ortalamasi:\n";
    for(const auto& ogrenci : mOgrenciNotlari){
        cout << "Ogrenci No: " << ogrenci.first << ", Not Ortalamasi: " << ogrenci.second << endl;
    }

    // search islemi
    int arananOgrenci = 102;
    if(mOgrenciNotlari.find(arananOgrenci) != mOgrenciNotlari.end()){
        cout << "\n" << arananOgrenci << " Numarali Ogrencinin Not Ortalamasi: " << mOgrenciNotlari[arananOgrenci] << endl;
    }else{
        cout << arananOgrenci << "Numarali Ogrenci Bulunamadi!" << endl;
    }

    // silme islemi
    mOgrenciNotlari.erase(102);
    cout << "102 numarali ogrenci siliniyor...\n"; 

    cout << "\nOgrenci Numaralari ve Not Ortalamasi:\n";
    for(const auto& ogrenci : mOgrenciNotlari){
        cout << "Ogrenci No: " << ogrenci.first << ", Not Ortalamasi: " << ogrenci.second << endl;
    }

    // aynı key ile yeni kayıt atamak istersek?
    mOgrenciNotlari[104] = 100.0;
    cout << "\nOgrenci Numaralari ve Not Ortalamasi:\n";
    for(const auto& ogrenci : mOgrenciNotlari){
        cout << "Ogrenci No: " << ogrenci.first << ", Not Ortalamasi: " << ogrenci.second << endl;
    }
    return 0;
}