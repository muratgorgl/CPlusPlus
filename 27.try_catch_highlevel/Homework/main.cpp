#include <iostream>
#include "HataSinifi.h"
using namespace std;


int main(){
    try{
        int x;
        cout << "Bir sayi giriniz: ";
        cin >> x;
        if (x==0){
            throw HataSinifi("Hata mesaji no:1");
        }
        else if(x<0){
            throw 100;
        }
        cout << "try sonu...";

    }
    catch(HataSinifi h){
        cout << "Exception yakalandi!\nOzel Hata Mesaji " << h.getHataMesaji() << endl;
    }
    catch(int hataKodu){
        cout << "Exception yakalandi!\nOzel Hata Mesaji: " << hataKodu << endl;
    }
    cout << "bye...";
    return 0;

}