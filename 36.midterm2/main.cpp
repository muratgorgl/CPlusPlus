#include <iostream>
#include <map>
#include <string>

using namespace std;

class Kitap{
    private:
        string kitapAdi;
        string yazarAdi;
        int rafNo;
    public:
        Kitap(string _kitapAdi, string _yazarAdi, int _rafNo){
            kitapAdi = _kitapAdi;
            yazarAdi = _yazarAdi;
            rafNo = _rafNo;
        } 
        string getKitapAdi(){
            return kitapAdi;
        }
        string getYazarAdi(){
            return yazarAdi;
        }
        int getRafNo(){
            return rafNo;
        }
        void bilgiYazdir(){
            cout << "Kitap Adi: " << kitapAdi << endl;
            cout << "Yazar Adi: " << yazarAdi << endl;
            cout << "Raf No: " << rafNo << endl;
            cout << endl;
        } 
};

void kitapEkleme(map<int, Kitap> &mKutuphane){
    cout << "---- Kitap Ekleme ----" << endl;
    string kitapAdi, yazarAdi;
    int no, rafNo;
    
    cout << "Kitap ID: ";
    cin >> no;
    cin.ignore(); 

    cout << "Kitap Adi: ";
    getline(cin, kitapAdi);

    cout << "Yazar Adi: ";
    getline(cin, yazarAdi);

    cout << "Raf No: ";
    cin >> rafNo;

    Kitap p(kitapAdi,yazarAdi,rafNo);
    mKutuphane.insert({no, p});
}

void tumKitaplariListele(map<int, Kitap> &mKutuphane){
    cout << "---- Tum Kitaplari Listele ----" << endl;
    for(auto &kitap : mKutuphane){
     
        cout << "ID: " << kitap.first << endl;
        kitap.second.bilgiYazdir();
        cout << "---------------------\n";
    }
}
void kitapBilgileriGoruntule(map<int, Kitap> &mKutuphane){
    int no;

    cout << "---- Kitap Bilgileri Goruntule ----" << endl;
    cout << "Hangi ID Kitabi Ariyorsunuz: ";
    cin >> no;
    cout << endl;

    if(mKutuphane.find(no) != mKutuphane.end()){
        cout << "Aradiniz Kitabin Bilgileri: \n";
        mKutuphane.find(no)->second.bilgiYazdir();
    }else{
        cout << "Bu ID ile kitap bulunamadi.\n";
    }

}

void kitapSilme(map<int, Kitap> &mKutuphane){
    cout << "---- Kitap Silme\n";
    int no;
    cout << "Hangi ID kitabi silmek istiyorsunuz: ";
    cin >> no;
    mKutuphane.erase(no);
    cout << "Kitap siliniyor... \n";
}



int main(){
    map<int, Kitap> mKutuphane;
    int secim;

    do
    {
        cout << "--- Kutuphane Kitap Bilgi Sistemi ---\n";
        cout << "1. Kitap Ekleme\n";
        cout << "2. Kitap Bilgilerini Goruntule\n";
        cout << "3. Kitap Silme\n";
        cout << "4. Tum Kitaplari Listele\n";
        cout << "5. Cikis\n";
        cout << "Lutfen Bir Secim Yapiniz: ";
        cin >> secim;
        cout << endl;
        switch (secim)
        {
            case 1:
                kitapEkleme(mKutuphane);
                break;
            case 2:
                kitapBilgileriGoruntule(mKutuphane);
                break;
            case 3:
                kitapSilme(mKutuphane);
                break;
            case 4:
                tumKitaplariListele(mKutuphane);
                break;
            case 5:
                cout << "Cikis yapiliyor...\n";
                return 0;
            default:
                break;
        }
    } while (true);
 
    return 0;
}