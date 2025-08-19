#include "Kedi.h"

// Constructor
Kedi::Kedi(string ad) : Hayvan(ad){
    // Ek yapılacak işlemleri de buraya yazın.
} 

void Kedi::fareYakala(){
    cout << Hayvan::getIsim() << " fare yakaliyor.";
}