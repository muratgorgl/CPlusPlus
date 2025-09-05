#include <iostream>
#include "Ogrenci.h"
#include <list>
using namespace std;


void menuGoster(){
    cout << "* * * * * * * * *\n";
    cout << "*               *\n";
    cout << "*      MENU     *\n";
    cout << "*               *\n";
    cout << "* * * * * * * * *\n";
    cout << "1. Yeni kayit ekle\n";
    cout << "2. Tum listeyi goster\n";
    cout << "3. Ogrenci ID ye gore kayit sil\n";
    cout << "4. Ogrenci ara\n";
    cout << "5. Cikis\n";
}

void kayitEkle(list<Ogrenci> *lst){
    int id;
    string ad, soyad, isim;
    int sinavNotu;
    cout << "Lutfen id giriniz: ";
    cin >> id;
    cout << "Lutfen ad giriniz: ";
    cin >> ad >> soyad;
    isim = ad + " " + soyad;
    cout << "Lutfen not giriniz: ";
    cin >> sinavNotu;
    Ogrenci ogr(id,ad,sinavNotu);
    lst->push_back(ogr);
}
void showList(list<Ogrenci> *lst){
    list<Ogrenci>::iterator it;
    cout << endl << "- - - Tum Ogrenci Listesi - - -\n";
    for(it = lst->begin(); it != lst->end(); it++){
        it ->ogrenciBilgiYazdir();
    }
    cout << endl;
}
void sil(list<Ogrenci> *lst){
    cout << endl << "- - - ID ye gore ogrenci sil - - -\n";
    int no;
    cout << "Lutfen silinecek id giriniz: ";
    cin >> no;
    list<Ogrenci>::iterator it;
    for(it = lst->begin(); it != lst->end(); it++){
        if(it->getId() == no){
            break;
        }
    }
    if(it == lst->end()){
        cout << "kayitli id bulunamadi\n";
    }else{
        lst->erase(it);
    }
    

}
void ara(list<Ogrenci> *lst){
    cout << endl << "- - - ID ye ara - - -\n";
    int no;
    cout << "Lutfen id giriniz: ";
    cin >> no;
    list<Ogrenci>::iterator it;
    for(it = lst->begin(); it != lst->end(); it++){
        if(it->getId() == no){
            break;
        }
    }
    if(it == lst->end()){
        cout << "kayitli id bulunamadi\n";
    }else{
        cout << endl << "Aradiginiz ogrenci bilgileri: \n";
        it->ogrenciBilgiYazdir();
        cout << endl;
    }
}


int main(){
    int secim=0;
    list<Ogrenci> *ogrenciList = new list<Ogrenci>;
    do
    {
        menuGoster();
        cout << "Lutfen bir secim yapiniz: ";
        cin >> secim;
        
        switch (secim)
        {
        case 1:
            kayitEkle(ogrenciList);
            break;
        case 2:
            showList(ogrenciList);
            break;
        case 3:
            sil(ogrenciList);
            break;
        case 4:
            ara(ogrenciList);
            break;
        case 5:
            break;
        
        default:
            break;
        }
    } while (secim!=5);
    
delete ogrenciList;
} 