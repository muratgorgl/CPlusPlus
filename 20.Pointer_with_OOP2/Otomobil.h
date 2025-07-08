#include <iostream>

using namespace std;



class Otomobil{
public:
    // Constructors
    Otomobil(string _renk, string _model, int _beygir, int kp);

    // Destructors
    ~Otomobil();
    int* pKapiSayisi;
    
    void ruhsatBilgiGoster();

    

    void setOtomobilRenk(string renk);
    string getOtomobilRenk();

    void setOtomobilModel(string model);
    string getOtomobilModel();

    void setOtomobilBeygir(int beygir);
    int getOtomobilBeygir();

private:
    string renk;
    string model;
    int beygir;

};

