#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Otomobil{
    private:
        string marka;
        string model;
        int yil;
    public:
        Otomobil(string _marka, string _model, int _yil) : marka(_marka), model(_model), yil(_yil){}

        void bilgiYazdir(){
            cout << "Marka: " << marka << ", Model: " << model << ", Yil: " << yil << endl;
        }

};


int main(){
    vector<Otomobil> vGaraj;
    vGaraj.push_back(Otomobil("Ford", "Focus", 2000));
    vGaraj.push_back(Otomobil("Audi", "A4", 2015));
    vGaraj.push_back(Otomobil("Mercedes", "C200", 2025));

    // Garajdaki otomobilleri listeleme
    cout << "Garajdaki otomobiller listeleniyor..\n";
    cout << "- - - - - - - - - - - - - - - - - - -\n";
    for(Otomobil &oto : vGaraj){
        oto.bilgiYazdir();
    }

    // Garajdan bir otomobil silme
    cout << "\nBir otomobil siliniyor...\n";
    vGaraj.erase(vGaraj.begin() + 1);

    // Garajdaki otomobilleri listeleme
    cout << "\nGarajdaki otomobiller listeleniyor..\n";
    cout << "- - - - - - - - - - - - - - - - - - -\n";
    for(Otomobil &oto : vGaraj){
        oto.bilgiYazdir();
    }

    // Yeni bir otomobil garaja ekleniyor
    cout << "\nYeni bir otomobil ekleniyor...\n";
    vGaraj.push_back(Otomobil("Toyota", "Corolla", 1998));

    // Garajdaki otomobilleri listeleme
    cout << "\nGarajdaki otomobiller listeleniyor..\n";
    cout << "- - - - - - - - - - - - - - - - - - -\n";
    for(Otomobil &oto : vGaraj){
        oto.bilgiYazdir();
    }
    
    cout << "\nGarajdaki ilk otomobilin bilgileri: \n";
    vGaraj[0].bilgiYazdir();

    cout << "\nGarajdaki son otomobilin bilgileri: \n";
    vGaraj[vGaraj.size() - 1].bilgiYazdir();
    return 0;
}