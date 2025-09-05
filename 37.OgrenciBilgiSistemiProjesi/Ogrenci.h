#include <iostream>

using namespace std;

class Ogrenci{
    private:
        int id;
        string ad;
        int sinavNotu;
    public:
        Ogrenci(int _id, string _ad, int _sinavNotu);
        void ogrenciBilgiYazdir();
        int getId();
        string getAd();
        int getSinavNotu();

        void setId(int _id);
        void setAd(string _ad);
        void setSinavNotu(int _sinavNotu);
};