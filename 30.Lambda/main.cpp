#include <iostream>
using namespace std;

int main(){

    int count = 0;

    // [&] => tüm dış değişkenleri referans olarak yakalar.
    // [=] => count kopyalanacak ve dışarıdaki count değişkenini etkilemez 
    auto arttir = [=]() mutable {
        int x = 10;
        count = count + x;
        cout << "Lambda icindeki count: " << count << endl;
    };


    // Lambdayı birkaç kez çağıralım.
    arttir();
    arttir();
    arttir();

    cout << "Asil Count: " << count << endl;

    return 0;
}