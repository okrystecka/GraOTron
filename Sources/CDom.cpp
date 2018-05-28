//
// Created by christine on 07.05.18.
//

#include "../Headers/CDom.h"

CDom::CDom(CKrolestwo* wlasciciel, int lMieszkancow)  : CBudynek(wlasciciel) {

    typ = typy::dom;
    liczbaMieszkancow = lMieszkancow;
    maxMieszkancow = 10;
    wspolPodatkow = lMieszkancow;

    cout << "Konstruktor CDom" << endl;
}

CDom::~CDom() {

    cout << "Destruktor CDom" << endl;

}

int CDom::rozbuduj() {
    if(CBudynek::rozbuduj()){
        maxMieszkancow += poziom*10;
        wspolPodatkow += poziom;
        return 1;
    } else {
        return 0;
    }
}

void CDom::dodajMieszkanca(int ile) {
    liczbaMieszkancow += ile;
    wspolPodatkow += ile*2;
}

int CDom::ileMieszkancow() {
    return liczbaMieszkancow;
}

void CDom::stworz() {

}

void CDom::usun() {
}


