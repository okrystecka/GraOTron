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

public:
    CTeren(int, int);
    ~CTeren();
    void stworzPola();
     void podajPolozenie();
     string podajTresc();


};


#endif //GRAOTRON_CTEREN_H
