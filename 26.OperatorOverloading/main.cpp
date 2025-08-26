#include <iostream>
using namespace std;

class Complex{
    private:
        double real, imag;
    public:
        // + operatörlerini aşırı yükleme
        // c1 + c2 => c1.topla(c2)
        Complex(double r=0, double i=0){
            real=r;
            imag=i;
        }
        Complex operator+(const Complex& other){
            return Complex(real + other.real, imag + other.imag);
        }  
        // - operatörlerini aşırı yükleme
        Complex operator-(const Complex& other){
            return Complex(real - other.real, imag - other.imag);
        } 
        // * operatörlerini aşırı yükleme
        Complex operator*(const Complex& other){
            return Complex(
                real * other.real - imag * other.imag, // real kısım
                real * other.imag + imag * other.real  // sanal kısmı
            );
        }  
        // << operatörünü aşırı yükleme => Örn. kullanım: cout << c1
        friend ostream& operator<<(ostream& os, const Complex& c){
            os << c.real << " + " << c.imag << "i" << endl;
            return os;
        } 
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){
    Complex c1(1.5, 2.5);
    Complex c2(3.5, 4.5);
    Complex c3 = c1 + c2;
    // Complex c4 = c1 - c2; 
    // Complex c5 = c1 * c2; 
    // c3.display();
    // c4.display();
    // c5.display();
    cout << c3 << "isleminizin sonucudur."; 

    return 0;
}