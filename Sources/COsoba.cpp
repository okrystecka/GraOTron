//
// Created by christine on 04.05.18.
//

#include "../Headers/COsoba.h"

COsoba::COsoba(CKrolestwo* wlasciciel, CTeren* poz , int maxZ = 100, int obecneZ = 100) {

    krolestwo = wlasciciel;
    pozycja = poz;
    maxZycie = maxZ;
    obecneZycie = obecneZ;
    cout << "Konstruktor COsoba" << endl;

}

COsoba::~COsoba() {

    cout << "Destruktor COsoba" << endl;

}

void COsoba::zmienPozycje(CTeren* nowaPozycja) {

    pozycja = nowaPozycja;

}

CTeren *COsoba::podajPozycje() {

    return pozycja;

}

CKrolestwo *COsoba::podajKrolestwo() {

    return krolestwo;

}

void COsoba::odejmijZycie(int ile) {

    if(ile >= obecneZycie){

        cout << "Jednostka jest dead x.x" << endl;

    } else {

        obecneZycie -= ile;

    }

}
