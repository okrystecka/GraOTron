//
// Created by christine on 04.05.18.
//

#include "../Headers/CTeren.h"


CTeren::CTeren(int xx, int yy) {
    x = xx;
    y = yy;
    tresc = "|__";
    krolestwo = nullptr;

    pola = vector<CPole*> (12, nullptr);
    jednostki = vector<COsoba*> ();
    generujPola();

    cout << "Konsturktor CTeren" << endl;
}

CTeren::~CTeren() {

    for (int i = (pola.size() - 1); i >= 0 ; i--){
        delete pola[i];
        pola.erase(pola.begin() + i);
    }
    //cout << "Destruktor CTeren" << endl;

}

void CTeren::generujPola(){

    for(int i = 0; i < 12; i++){
        CPole* nowe = new CPole;
        pola[i] = nowe;
    }

}

CBudynek* CTeren::dodajBudynek(CBudynek::typy typ) {

    int ktorepole = 9999;

    for(int i = 0; i < pola.size(); i++){
        if (!pola[i]->pokazBudynek()){
            ktorepole = i;
            break;
        }
    }

    if (ktorepole != 9999){
         return pola[ktorepole]->dodajBudynek(typ);
    } else {
        cout << "Pole jest maksymalnie zabudowane" << endl;
        return nullptr;
    }
}


void CTeren::zmienPolozenie(int terenX, int terenY) {

    x = terenX;
    y = terenY;

}

void CTeren::podajPolozenie() {

    cout << "Polozenie danego pola: " << x << " " << y << endl;

}

void CTeren::zmienTresc(string nowaTresc) {

    tresc = nowaTresc;

}

string CTeren::podajTresc() {

    return tresc;

}

void CTeren::przypiszKrolestwo(CKrolestwo* krol) {

    krolestwo = krol;
    tresc = "|o";

}

CKrolestwo* CTeren::czyPrzypisane() {

    if (krolestwo){
        return krolestwo;
    } else {
        return nullptr;
    }
}


