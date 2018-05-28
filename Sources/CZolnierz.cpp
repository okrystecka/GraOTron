//
// Created by christine on 28.05.18.
//

#include "../Headers/CZolnierz.h"

CZolnierz::CZolnierz(CKrolestwo* wlasciciel, CTeren* poz) : COsoba(wlasciciel, poz){

    cout << "Konstruktor CZolnierz" << endl;

}

CZolnierz::~CZolnierz() {

    cout << "Destruktor CZolnierz" << endl;

}

bool CZolnierz::atakuj() {
    return false;
}

bool CZolnierz::bron() {
    return false;
}
