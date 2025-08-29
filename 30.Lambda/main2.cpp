#include <iostream>
using namespace std;

int main(){
    auto karisikLambda = [](bool kosul) -> int {
        if(kosul){
            return 42;
        }
        else{
            return 3.14;
        }
    };

    cout << karisikLambda(false) << endl;
    return 0;
}