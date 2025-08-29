#include <iostream>
using namespace std;

// C++ 11 kullanan IDE'lerde auto fonk. kullanımı
auto topla(int x, int y) -> int {
    return (x + y);
}

// C++ 14 kullanan IDE'lerde auto fonk. kullanımı
auto cikar(int x, int y) {
    return (x - y);
}

int main(){
    auto sayi = 10;  // Sayi değişkeni int olarak belirlenir.
    auto yazi = "Hello World!!";  // string 
    auto pi = 3.14;  // double
    
    cout << "Sayi: " << sayi << endl;
    cout << "Yazi: " << yazi << endl;
    cout << "Pi sayisi: " << pi << endl;

    cout << "Toplama: " << topla(25,12) << endl;
    cout << "Cikarma: " << cikar(25,12) << endl;

    auto sonuc = cikar(94, 68);
    cout << "Sonuc: " << sonuc << endl;

    return 0;
}