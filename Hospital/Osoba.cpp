//
// Created by HP on 13. 10. 2023..
//

#include "Osoba.h"
#include <iostream>
#include <cstring>
using namespace std;

void Osoba::setIme() {
    cout << "Unesite ime: ";
    cin.getline(this->ime,20);
}

void Osoba::setPrezime() {
    cout << "Unesite prezime: ";
    cin.getline(this->prezime,20);
}

void Osoba::setGodine() {
    cout << "Unesite godine: ";
    cin >> this->godine;
    cin.ignore();
}

/*void Osoba::setSpol() {
    string a;
    do{
        cout << "Unesite spol(z ili m): ";
        cin >> a;
    }while(strcmp(a, "z")!=0 && strcmp(a, "m")!=0);
    this->spol=a;
}*/

char* Osoba::getIme() {
    return this->ime;
}

char* Osoba::getPrezime() {
    return this->prezime;
}

int Osoba::getGodine() {
    return this->godine;
}

/*string Osoba::getSpol() {
    return this->spol;
}*/

void Osoba::unesiOsobu() {
    this->setIme();
    this->setPrezime();
    this->setGodine();
    //this->setSpol();

   /* cout << "Unos zavrsen!" << endl;
    cout << endl;*/
}

void Osoba::ispisiOsobu() {
    cout << "Ime: " << this->getIme() << endl << "Prezime: " << this->getPrezime() << endl << "Godine: " << this->getGodine() << endl /*"Spol: "  << this->getSpol() << endl*/;

}


