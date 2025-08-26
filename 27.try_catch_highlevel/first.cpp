#include <iostream>
using namespace std;

int main(){

    try{
        int yas;
        cout << "Yasinizi giriniz: ";
        cin >> yas;
        if (yas >= 18){
            cout << "Erisim yetkiniz var. Yasiniz tutuyor.";
        }else{
            throw(yas);
        }

    }catch(int hataKodu){
        cout << "Erisim yetkiniz yok. Yasiniz tutmuyor!\n";
        cout << "Yasiniz: " << hataKodu;
    }
    cout << "\nbye...\n";

    return 0;
}