//
// Created by christine on 04.05.18.
//

#include "../Headers/CTeren.h"


CTeren::CTeren(int xx, int yy) {
    x = xx;
    y = yy;
    tresc = "|__";

    pola = vector<CPole*> (12, nullptr);
    jednostki = vector<COsoba*> ();

    cout << "Konsturktor CTeren" << endl;
}

CTeren::~CTeren() {

    cout << "Destruktor CTeren" << endl;

}

void CTeren::stworzPola() {

    for(int i = 0; i < 12; i++){
        pola[i] = new CPole;
    }

}

void CTeren::podajPolozenie() {

    cout << "Polozenie danego pola: " << x << " " << y << endl;

}

string CTeren::podajTresc() {

    return tresc;

}