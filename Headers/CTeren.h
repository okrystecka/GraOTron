//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CTEREN_H
#define GRAOTRON_CTEREN_H


#include "CPole.h"
#include "COsoba.h"

class CTeren {
private:
    int x, y;
    string tresc;
    vector <CPole*> pola;
    vector <COsoba*> jednostki;
    CKrolestwo* krolestwo;

public:
    CTeren(int, int);
    ~CTeren();

    void generujPola();
    CBudynek* dodajBudynek(CBudynek::typy);

    void zmienPolozenie(int, int);
    void podajPolozenie();
    void zmienTresc(string);
    string podajTresc();

    void przypiszKrolestwo(CKrolestwo* krol);
    CKrolestwo* czyPrzypisane();

};

#endif //GRAOTRON_CTEREN_H
