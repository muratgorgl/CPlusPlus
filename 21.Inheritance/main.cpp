#include "iostream"
#include "Kedi.h"
#include "Kopek.h"
#include "Kus.h"

using namespace std;

int Kopek::kopekSayisi=0;

int main(){
    // Kedi tekir("tekir");
    // tekir.beslen();
    // tekir.uyu();
    // tekir.fareYakala();
    // cout<<endl<<endl<< "-------------------------"<< endl<<endl;

    Kopek kopek("Karabas");
    kopek.beslen();
    kopek.uyu();
    kopek.Havla();
    cout<<endl<<endl<< "-------------------------"<< endl<<endl;

    Kopek kopek2("Johny");
    Kopek kopek3("Kenny");

    Kopek *kp = new Kopek("Ali");

    // Kus kus("limon");
    // kus.beslen();
    // kus.uyu();
    // kus.uc();

    cout << endl << "Kopek Sayisi: " << kopek.kopekSayisi << endl;

    delete kp;
    cout << "Kopek Sayisi: " << kopek.kopekSayisi << endl;

    return 0;
}