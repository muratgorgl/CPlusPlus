#include "Kus.h"


Kus::Kus(string ad) : Hayvan(ad){

}

void Kus::uc(){
    cout << Hayvan::getIsim() << " ucuyor";
}