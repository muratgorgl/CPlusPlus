#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);

    cout << "Vector boyutu: " << vNumbers.size() << endl;

    for(int i = 0 ; i < vNumbers.size() ; i++){
        cout << "Eleman " << i << ": " << vNumbers[i] << endl; // diğer kullanım: vNumbers.at(i)
    } // 10 20 30


    // araya elaman ekleme 
    //vNumbers.insert(vNumbers.begin() + 1, 15); // ikinci pozisyona 15 ekle.

    // en sondaki elemanı silme
    // vNumbers.pop_back();

    // belirli bir elemanı silme
    //vNumbers.erase(vNumbers.begin() + 1);

    // vektörü temizleme
    // vNumbers.clear();

    cout << endl << endl;

    // bir vektörün başlangıç değeriyle doldurma
    vector<int> myVector(5,42);
    for(int &num : myVector){
        cout << num << "  "; 
    } 


   














/* 
    for(const int &num : vNumbers){
        cout << num << "  ";
        num = num + 1; 
    }
 */
    // const kullanımının amacı döngüde değişkenler değiştirilemez özelliği olması.
    // & kullanmamızın amacı vector'e daha hızlı erişim sağlamak için
    // eğer içindeki değiştirmiyceksek "const" kullanmayız.
    // & bunu kullanmazsak indekslerin kopyasını alır değişikliği göremeyiz. eğer kullanırsak direkt olarak müdahale edip değiştirebiliriz.







    /* 
    vNumbers[1] = 42;
    cout << endl << vNumbers[1] << endl;
    for(int i = 0 ; i < vNumbers.size() ; i++){
        cout << "Eleman " << i << ": " << vNumbers[i] << endl; // diğer kullanım: vNumbers.at(i)
    }
*/
    


// 2. örnek
/* 
    vector<string> vCars = { "opel", "audi", "bmw"};
    vCars.push_back("mercedes");
    for(const string &car : vCars){
        cout << car << "  ";
    }
 */
    return 0;
}