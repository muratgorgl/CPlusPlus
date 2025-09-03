#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Personel{
    private:
        string isim;
        string kadro;
        int personelNo;
        

    public:
        Personel(string _isim, string _kadro, int _personelNo){
            isim = _isim;
            kadro = _kadro;
            personelNo = _personelNo;
        }
        void bilgiYazdir(){
            cout << "Ad Soyad: " << isim << "| Kadro: " << kadro << "| Personel No: " << personelNo << endl;
        }
        string getIsim(){
            return isim;
        }
        void setIsim(string isim){
            isim=isim;
        }
        string getKadro(){
            return kadro;
        }
        void setKadro(string kadro){
            kadro=kadro;
        }
        int getPersonelNo(){
            return personelNo;
        }
        void setPersonelNo(int personelNo){
            personelNo = personelNo;
        }
};

void personelEkle(vector<Personel> &vPersoneller){
    string isim, kadro;
    int no;

    cout << "Personel No: ";
    cin >> no;
    cin.ignore(); // Yeni satiri yani \n temizler.

    cout << "Isim (Ad Soyad): ";
    getline(cin, isim);

    cout << "Kadro: ";
    getline(cin, kadro);
    
    Personel p(isim, kadro, no);
    vPersoneller.push_back(p);
    cout << "Personel basariyla eklendi.\n";
}

void personelListele(vector<Personel> &vPersoneller){
    if(vPersoneller.empty()){
        cout << "Personel Listesi Bos...\n";
    }
    cout << "--- Personel Listesi ---\n";
    for(auto &personel : vPersoneller) {
        personel.bilgiYazdir();
    }
}

void personelAra(vector<Personel> &vPersoneller){
    int no;
    cout << "Hangi no'lu personele ulaşmak istersiniz: ";
    cin >> no;
    for(Personel &pers : vPersoneller){
        if(pers.getPersonelNo() == no){
            cout << "Bu numarali calisanin bilgileri: \n";
            pers.bilgiYazdir();
            return;
        }
    }
    cout << "Bu numarali calisan yok.";
}

void personelSil(vector<Personel> &vPersoneller){
    int no;
    cout << "Hangi no'lu personeli silmek istersiniz: ";
    cin >> no;
    vPersoneller.erase(vPersoneller.begin() + no - 1);
}

int main(){
    vector<Personel> vPersoneller;
    int secim;
    
    do
    {
        cout << "\n---- Personel Yonetim Sistemi ----\n";
        cout << "1. Personel Ekle\n";
        cout << "2. Personel Listele\n";
        cout << "3. Personel Ara\n";
        cout << "4. Personel Sil\n";
        cout << "5. Cikis\n";
        cout << "Seciminizi Lutfen Yapin: ";
        cin >> secim;

        switch (secim)
        {
        case 1:
            personelEkle(vPersoneller);
            break;
        case 2:
            personelListele(vPersoneller);
            break;
        case 3:
            personelAra(vPersoneller);
            break;
        case 4:
            personelSil(vPersoneller);
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