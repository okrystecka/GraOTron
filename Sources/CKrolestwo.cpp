//
// Created by christine on 02.05.18.
//

#include "../Headers/CKrolestwo.h"

CKrolestwo::CKrolestwo(int lMiesz, double maxObr, double obObr) {

    liczMieszkancow = lMiesz;
    maxObrona = maxObr;
    obecnaObrona = obObr;
    int ktoraNazwa = rand()%7;
    nazwa = nazwyKrolestw[ktoraNazwa];

    budynki = vector<CBudynek*> (0, nullptr);
    for( int i = 0; i < 4; i++){ //todo domyslne polozenie magazynow
        CMagazyn* mag;
        mag = new CMagazyn(this);
        magazyny.push_back(mag);
    }

    cout << "Konstruktor CKrolestwo" << endl;

}

CKrolestwo::~CKrolestwo() {

    for (int i = 0; i < 4; i++){
        delete magazyny[i];
        magazyny.erase(magazyny.begin() + magazyny.size() - 1);
    }
    cout << "Destruktor CKrolestwo" << endl;

}

void CKrolestwo::tura() {

}

void CKrolestwo::dodajSurowiec() {
    cout << "Dodaje surowiec" << endl;

}

bool CKrolestwo::czyStac(int zloto, int drewno, int zboze, int metal) {

    if(magazyny[0]->czyWystarczy(zloto) && magazyny[1]->czyWystarczy(drewno) && magazyny[2]->czyWystarczy(zboze) && magazyny[3]->czyWystarczy(metal)){
        return 1;
    } else {
        if (magazyny[0]->czyWystarczy(zloto))  cout << "Masz za mało zlota" << endl;
        if (magazyny[1]->czyWystarczy(drewno))  cout << "Masz za mało drewna" << endl;
        if (magazyny[2]->czyWystarczy(zboze))  cout << "Masz za mało zboza" << endl;
        if (magazyny[3]->czyWystarczy(metal))  cout << "Masz za mało metalu" << endl;
        return 0;
    }

}

void CKrolestwo::wydajSurowiec(int zloto, int drewno, int zboze, int metal) {

    magazyny[0]->odejmij(zloto);
    magazyny[1]->odejmij(drewno);
    magazyny[2]->odejmij(zboze);
    magazyny[3]->odejmij(metal);

}

void CKrolestwo::zbuduj() {

}

void CKrolestwo::stanMagazynow() {

    cout << "Stan twojego magazynu: \n Zloto: " << magazyny[0]->wypiszSurowiec() << " \n Drewno: " << magazyny[1]->wypiszSurowiec() << " \n Zboze: " << magazyny[2]->wypiszSurowiec() << "\n Metal: " << magazyny[3]->wypiszSurowiec() << endl;

}

