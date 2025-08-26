#include <iostream>
using namespace std;

int main(){
    try{
        int x = 30;
        int y;
        cout << "Lutfen pozitif bir deger giriniz: ";
        cin >> y;
        
        if(y == 0)
            throw 100;
        else if(y < 0)
            throw 101;
        else{
            int z = x / y;
            cout << z << endl;
        }

    }catch(int hataKodu){
        if(hataKodu==100){
            cout << "0 degeri olculdu.";
        }
        else if(hataKodu==101){
            cout << "negatif deger olculdu.";
        }
    }

    cout << "\nbye...";
    return 0;
}