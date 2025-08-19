#pragma once

#include "iostream"

using namespace std;


class Hayvan{
    public:
        Hayvan(string ad);
        void beslen();
        void uyu();
        string getIsim();
        void setIsim(string ad);
    private:
        string isim;
};