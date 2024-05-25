#include <iostream>
#include "Osoba.h"
#include "Doktor.h"
#include "Pacijent.h"
using namespace std;

int main() {
    Doktor dok;
    Pacijent pac;

    dok.unesiDoktora();
    dok.ispisiDoktora();
    cout << endl << endl << "######################### Promjena statusa #########################" << endl << endl;
    dok.promjeniStatus();
    dok.ispisiDoktora();

    pac.unesiPacijenta();
    pac.ispisiPacijenta();
    cout << endl << endl << "######################### Promjena statusa i dijagnoze #########################" << endl << endl;
    pac.promjeniStatus();
    pac.promjenidijagnozu();
    pac.ispisiPacijenta();

    return 0;
}
