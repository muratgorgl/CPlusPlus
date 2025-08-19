#include <iostream>

using namespace std;


//Base Class
class Hayvan{
    public: 
        virtual void sesCikar(){
            cout << "Hayvan sesCikar fonksiyonu cagirildi.\n\n";
        }
        void yazdir(){
            cout << "Hayvan sinifi yazdir fonksiyonu cagirildi.\n";
        }
};

//Child Class : Kedi
class Kedi : public Hayvan{
    public:
        virtual void sesCikar(){
            cout << "miyav miyav...\n";
        }
        void yazdir(){
            cout << "Kedi sinifinin yazdir fonksiyonu cagirildi.\n";
        }
};

//Child Class : Kopek
class Kopek : public Hayvan{
    public:
        virtual void sesCikar(){
            cout << "hav hav hav...\n";
        }
        void yazdir(){
            cout << "Kopek sinifinin yazdir fonksiyonu cagirildi.\n";
        }
};


void ucKezSesCikar(Hayvan *h){
    for(int i = 0 ; i<3 ; i++){
        h->sesCikar();
    }
    
}

int main(){

    /*
    Hayvan *pHayvan;
    Kedi tekir;
    pHayvan = &tekir;
    // pHayvan->sesCikar();
    // pHayvan->yazdir();

    Kopek karabas;
    pHayvan = &karabas;
    // pHayvan->sesCikar();

    // karabas.yazdir();

    ucKezSesCikar(pHayvan);   
    */
    
}
