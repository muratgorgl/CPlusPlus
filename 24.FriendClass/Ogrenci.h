#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ogrenci{
    private:
        string ad;
        int not1;
        int not2;
    public:
        Ogrenci(string _ad, int _not1, int _not2);
        friend class Hesaplayici;
};