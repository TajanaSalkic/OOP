//
// Created by HP on 13. 10. 2023..
//

#ifndef ZADACA_1_PACIJENT_H
#define ZADACA_1_PACIJENT_H
#include "Osoba.h"


class Pacijent {
public:
    Osoba p;
    char odjel[20], dijagnoza[50];
    bool status;

    void setOsobu();
    void setOdjel();
    void setDijagnozu();
    void setStatus();
    void setBrK();

    Osoba getOsobu();
    char* getOdjel();
    char* getDijagnozu();
    bool getStatus();
    char* getBrK();

    void promjeniStatus();
    void unesiPacijenta();
    void ispisiPacijenta();
    void promjenidijagnozu();

private:
    char broj_kartona[9];
};


#endif //ZADACA_1_PACIJENT_H
