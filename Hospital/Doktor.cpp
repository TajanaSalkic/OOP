//
// Created by HP on 13. 10. 2023..
//

#include "Doktor.h"
#include <iostream>
using namespace std;

void Doktor::setOsoba() {
    this->d.unesiOsobu();
}

void Doktor::setZvanje() {
    cout << "Unesite zvanje: ";
    cin.getline(this->zvanje,20);
}

void Doktor::setOdjel() {
    cout <<"Unesite odjel: ";
    cin.getline(this->odjel,20);
}

void Doktor::setStatus() {
    int temp;
    do{
        cout << "Unesite status (Zaposlen-0 ili Otpusten-1): ";
        cin >> temp;
    }while(temp<0 || temp>1);

    this->status=static_cast<bool>(temp);
    cin.ignore();
}

Osoba Doktor::getOsoba() {
    return this->d;
}

char* Doktor::getZvanje() {
    return this->zvanje;
}

char* Doktor::getOdjel() {
    return this->odjel;
}

bool Doktor::getStatus() {
    return this->status;
}

void Doktor::promjeniStatus() {
    this->status=!this->status;
}

void Doktor::unesiDoktora() {
    cout << "***** UNOS DOKTORA *****" << endl;
    this->setOsoba();
    this->setZvanje();
    this->setOdjel();
    this->setStatus();
    cout << "Unos zavrsen!" << endl << endl;
}

void Doktor::ispisiDoktora() {
    cout << "***** ISPIS DOKTORA *****" << endl;
    this->d.ispisiOsobu();
    cout << "Zvanje: " << this->getZvanje() << endl << "Odjel: " << this->getOdjel() << endl << "Status: ";
    if(this->status==0){
        cout << "Zaposlen" << endl<< endl;
    }else{
        cout << "Otpusten" << endl << endl;
    }

}
