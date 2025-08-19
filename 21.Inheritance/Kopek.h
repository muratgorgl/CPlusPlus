#pragma once

#include "iostream"
#include "Hayvan.h"

class Kopek : public Hayvan{
    public:
        Kopek(string ad);
        ~Kopek(); 
        void Havla();
        static int kopekSayisi;
};