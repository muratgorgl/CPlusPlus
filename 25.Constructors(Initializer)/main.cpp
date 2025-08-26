#include <iostream>
using namespace std;

class Kadro{
private:
    string kadroTipi;
    double maasKatSayisi;
public:
    Kadro(string tip = "standart", double katSayi=1.0) : kadroTipi(tip), maasKatSayisi(katSayi) {}
    void yazdir(){
        cout << "Kadro Tipi: " << kadroTipi << "\nMaaas Kat Sayisi: " << maasKatSayisi << endl; 
     }

};



int main(){
    Kadro k1;
    k1.yazdir();

    Kadro k2("Uzman",4.3);

    k2.yazdir();

    return 0;
}