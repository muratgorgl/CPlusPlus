#include <iostream>

using namespace std;

class Otomobil{
    private:
        string marka;
    public:
        int yil;
        Otomobil(string _marka, int _yil){
            marka = _marka;
            yil = _yil;
        }
        friend void bilgileriGoster(Otomobil otomobil);
};

void bilgileriGoster(Otomobil otomobil){
    cout << otomobil.marka << " " <<otomobil.yil;
}

int main(){
    Otomobil otomobil("Opel", 2012);
    bilgileriGoster(otomobil);
}