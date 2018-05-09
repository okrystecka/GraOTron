//
// Created by christine on 04.05.18.
//

#include "../Headers/CMagazyn.h"


CMagazyn::CMagazyn( CKrolestwo* wlasciciel, float chronSur, float prodSur, float liczSur) : CBudynek(wlasciciel) {

    chronioneSurowce = chronSur;
    prodSurowca = prodSur;
    liczSurowca = liczSur;

    cout << "Konsturktor CMagazyn" << endl;

}

CMagazyn::~CMagazyn() {

    cout << "Destruktor CMagazyn" << endl;

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

int CMagazyn::wypiszSurowiec() {

    return liczSurowca;

}

void CMagazyn::stworz() {
    CBudynek::stworz();
}

void CMagazyn::usun() {
    CBudynek::usun();
}



