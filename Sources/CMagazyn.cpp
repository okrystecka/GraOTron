//
// Created by christine on 04.05.18.
//

#include "../Headers/CMagazyn.h"


CMagazyn::CMagazyn( CKrolestwo* wlasciciel, float chronSur, float prodSur, float maxSur, float liczSur) : CBudynek(wlasciciel) {

    typ = typy::magazyn;
    chronioneSurowce = chronSur;
    prodSurowca = prodSur;
    maxSurowca = maxSur;
    liczSurowca = liczSur;

    //cout << "Konsturktor CMagazyn" << endl;

}

CMagazyn::~CMagazyn() {

    //cout << "Destruktor CMagazyn" << endl;

}

bool CMagazyn::czyWystarczy(int ileSurowca) {

    if(liczSurowca >= ileSurowca ){
        return 1;
    } else {
        return 0;
    }

}

void CMagazyn::odejmij(int ileSurowca) {

    liczSurowca -= ileSurowca;

}


void CMagazyn::dodaj(int ileSurowca) {

    liczSurowca += ileSurowca;
}


float CMagazyn::wypiszSurowiec() {

    return liczSurowca;

}

int CMagazyn::rozbuduj() {
    if(CBudynek::rozbuduj()) {
        prodSurowca += this->poziom * 0.5;
        chronioneSurowce += this->poziom * 100;
        maxSurowca += this->poziom * 1000;
        return 1;
    } else {
        return 0;
    }
}

void CMagazyn::stworz() {
}

void CMagazyn::usun() {
}

