//
// Created by christine on 07.05.18.
//

#include "../Headers/CWytwornia.h"


CWytwornia::CWytwornia(CKrolestwo* wlasciciel, string nazwa, int lZatrudnionych, int wWydobycia)  : CBudynek(wlasciciel) {
    type = nazwa;
    liczbaZatrudnionych = lZatrudnionych;
    wspolWydobycia = wWydobycia;
    maxZatrudnionych = 10;

    cout << "Konsturktor CWytwornia" << endl;
}

CWytwornia::~CWytwornia() {

    cout << "Destruktor CWytwornia" << endl;

}

void CWytwornia::dodajPracownika(int ile) {
    liczbaZatrudnionych += ile;
    wspolWydobycia += ile * 0.5;
}

void CWytwornia::usunPracownika(int ile) {
    liczbaZatrudnionych -= ile;
    wspolWydobycia -= ile * 0.5;
}

int CWytwornia::rozbuduj() {

    if (CBudynek::rozbuduj()) {
        wspolWydobycia += this->poziom * 2;
        maxZatrudnionych += this->poziom * 10;
        return 1;
    } else {
        return 0;

    }
}

void CWytwornia::stworz() {

}

void CWytwornia::usun() {
}
