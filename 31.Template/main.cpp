#include <iostream>
using namespace std;

int toplama(int a, int b){
    return a + b;  
}
 
double toplama(double a, double b){
    return a + b;  
}

template <typename T> 
T topla(T a, T b){
    return a + b;
}

template<typename T>
T cikar(T a, T b){
    return a - b;
}

template <typename T>
class Kare{
    private:
        T kenar;
    public:
        Kare(T uzunluk){
            kenar = uzunluk;
        }
        T alan(){
            return kenar * kenar;
        }
        void bilgiGoster(){
            cout <<"Kenar uzunluk: " << kenar << endl;
        }
};


template <typename T>
class Dikdortgen{
    private:
        T uzunKenar;
        T kisaKenar;
    public:
        Dikdortgen(T _kisaKenar, T _uzunKenar){
            kisaKenar = _kisaKenar;
            uzunKenar = _uzunKenar;
        }
        T alan(){
            return kisaKenar * uzunKenar;
        }
        void bilgi(){
            cout << "Kisa kenar uzunluğu: " << kisaKenar <<", Uzun kenar uzunluğu: " << uzunKenar << endl;
        }
};

int main(){

    // cout << topla(12.7, 4.8) << endl;

/*  Kare<int> k1(5);  // int tipinde bir kare
    Kare<double> k2(7.5);  // double tipinde bir kare

    k1.bilgiGoster();
    cout << "K1 Alani: " << k1.alan() << endl;
    k2.bilgiGoster();
    cout << "K2 Alani: " << k2.alan() << endl;
 */

    Dikdortgen<int> d1(5,6);
    Dikdortgen<double> d2(7.7,8.8);

    d1.bilgi();
    cout << "D1'in Alani: " << d1.alan() << endl;

    d2.bilgi();
    cout << "D2'in Alani: " << d2.alan() << endl;
    return 0;
}