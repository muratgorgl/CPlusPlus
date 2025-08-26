#include <iostream>
using namespace std;

class Kare{
    private:
        double kenarUzunlugu;
    public:
        // c1 + c2 => c1.topla(c2)
        Kare(double kenar=0){
            kenarUzunlugu = kenar;
        }
        // + operator: returns a new Kare whose side is the sum of sides
        Kare operator+(const Kare& other) const {
            return Kare(kenarUzunlugu + other.kenarUzunlugu);
        }

        // area and perimeter helpers
        double alan() const { return kenarUzunlugu * kenarUzunlugu; }
        double cevre() const { return 4 * kenarUzunlugu; }

        // stream output: print side, area and perimeter
        friend ostream& operator<<(ostream& os, const Kare& k){
            os << "Kenar: " << k.kenarUzunlugu
               << ", Alan: " << k.alan()
               << ", Cevre: " << k.cevre();
            return os;
        }

};

int main(){
    // iki kare olusturup alan ve cevrelerini yazdirma
    Kare k1(3.5);
    Kare k2(2.0);

    cout << "k1: " << k1 << endl;
    cout << "k2: " << k2 << endl;

    Kare k3 = k1 + k2; // kenarlar toplanir
    cout << "k3 = k1 + k2: " << k3 << endl;

    return 0;
}