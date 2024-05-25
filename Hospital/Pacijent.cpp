//
// Created by HP on 13. 10. 2023..
//

#include "Pacijent.h"
#include <iostream>
using namespace std;

void Pacijent::setOsobu() {
    this->p.unesiOsobu();
}

void Pacijent::setDijagnozu() {
    cout << "Unesite dijagnozu: ";
    cin.getline(this->dijagnoza,50);
}

void Pacijent::setStatus() {
    int temp;
    do{
        cout << "Unesite status pacijenta (Otpušten-0 ili U procesu-1): ";
        cin >> temp;
    }while(temp<0 || temp>1);
    this->status=static_cast<bool>(temp);
    cin.ignore();
}

void Pacijent::setOdjel() {
    cout << "Unesite odjel: ";
    cin.getline(this->odjel,20);
}

void Pacijent::setBrK() {
    cout <<"Unesite broj kartona: ";
    cin.getline(this->broj_kartona,9);
}

Osoba Pacijent::getOsobu() {
    return this->p;
}

char* Pacijent::getOdjel() {
    return this->odjel;
}

bool Pacijent::getStatus() {
    return this->status;
}

char* Pacijent::getBrK() {
    return this->broj_kartona;
}

char* Pacijent::getDijagnozu() {
    return this->dijagnoza;
}

void Pacijent::promjeniStatus() {
    this->status=!this->status;
}

void Pacijent::promjenidijagnozu() {
    cout << "Promjena dijagnoze! " << endl << "Dijagnoza: ";
    cin.getline(this->dijagnoza,50);
}

void Pacijent::unesiPacijenta() {
    cout << "===== UNOS PACIJENTA =====" << endl;
    this->setOsobu();
    this->setOdjel();
    this->setBrK();
    this->setStatus();
    this->setDijagnozu();
    cout << endl << "Unos zavrsen! " << endl << endl;
}

void Pacijent::ispisiPacijenta() {
    cout << endl << "===== ISPIS PACIJENTA =====" << endl;
    this->p.ispisiOsobu();
    cout << "Dijagnoza: " << this->getDijagnozu() << endl << "Broj kartona: " << this->getBrK() << endl << "Odjel: " << this->getOdjel() << endl << "Status: ";
    if(this->status==0){
        cout << "Otpusten" << endl << endl;
    }else{
        cout << "U procesu " << endl << endl;
    }
}