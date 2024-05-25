//
// Created by HP on 13. 10. 2023..
//

#ifndef ZADACA_1_DOKTOR_H
#define ZADACA_1_DOKTOR_H
#include "Osoba.h"


class Doktor {
public:
    Osoba d;
    char zvanje[20], odjel[20];

    void setZvanje();
    void setOdjel();
    void setStatus();
    void setOsoba();

    char* getZvanje();
    char* getOdjel();
    bool getStatus();
    Osoba getOsoba();

    void promjeniStatus();
    void unesiDoktora();
    void ispisiDoktora();

private:
    bool status;
};


#endif //ZADACA_1_DOKTOR_H
