#include <iostream>
using namespace std;
struct BankAccount{
    public:
        double balance;
        // Constructor
        BankAccount(double initialBalance){
            balance = initialBalance; 
            cout << "Hesap Olusturuldu...";
        }
        // Destructor
        ~BankAccount(){
            cout << "Hesap Kapatildi...";
        }

        // Getter
        double getBalance(){
            return balance;
        }

        // Setter benzeri para ekleme metodu
        void deposit(double amount){
            balance += amount;
        }
        
        // Setter benzeri para çıkarma metodu
        void withDraw(double amount){
            balance -= amount;
        }
};



int main(){

    // BankAccount myAccount(1000.0);
    // cout << "Guncel Bakiye: " << myAccount.getBalance() << endl;
    // myAccount.deposit(500.0);
    // cout << "Para Yatirildiktan SonraGuncel Bakiye: " << myAccount.getBalance() << endl;
    // myAccount.withDraw(300.0);
    // cout << "Para Cekildikten Sonra Guncel Bakiye: " << myAccount.getBalance() << endl;

    BankAccount *myAccount = new BankAccount(1000.0);
    cout << "Guncel Bakiye: " << myAccount->getBalance() << endl;
    myAccount->deposit(500.0);
    cout << "Para Yatirildiktan SonraGuncel Bakiye: " << myAccount->getBalance() << endl;
    myAccount->withDraw(300.0);
    cout << "Para Cekildikten Sonra Guncel Bakiye: " << myAccount->getBalance() << endl;
    delete myAccount;

    return 0;
}