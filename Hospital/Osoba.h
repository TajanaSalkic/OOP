//
// Created by HP on 13. 10. 2023..
//

#ifndef ZADACA_1_OSOBA_H
#define ZADACA_1_OSOBA_H
/*#include <iostream>
#include <cstring>
using namespace std;*/


class Osoba {
public:
    char ime[20], prezime[20];
    int godine;

    void setIme();
    void setPrezime();
    void setGodine();
    void setSpol();

    char* getIme();
    char* getPrezime();
    int getGodine();
    //string* getSpol();

    void unesiOsobu();
    void ispisiOsobu();

private:
    //string spol;
};


#endif //ZADACA_1_OSOBA_H
