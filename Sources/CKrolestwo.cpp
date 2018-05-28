//
// Created by christine on 02.05.18.
//

#include "../Headers/CKrolestwo.h"

CKrolestwo::CKrolestwo(CTeren* stolica, int lMiesz, double maxObr, double obObr) {

    int ktoraNazwa = rand()%7;
    powierzchnia.push_back(stolica);
    nazwa = nazwyKrolestw[ktoraNazwa];
    liczMieszkancow = lMiesz;
    maxObrona = maxObr;
    obecnaObrona = obObr;
    budynki = vector<CBudynek*> (0, nullptr);
    magazyny = vector<CMagazyn*> (0, nullptr);
    dodajMagazyny();

    cout << "Konstruktor CKrolestwo" << endl;

}

CKrolestwo::~CKrolestwo() {

    for (int i = (budynki.size() - 1); i >= 0 ; i--){
        delete budynki[i];
        budynki.erase(budynki.begin() + i);
    }

    for (int i = 3; i >= 0 ; i--){
        delete magazyny[i];
        //hlhlhlh
        magazyny.erase(magazyny.begin() + i);
    }
    cout << "Destruktor CKrolestwo" << endl;

}

void CKrolestwo::tura() {

    stanMagazynow();

}

void CKrolestwo::dodajSurowiec(int zloto, int drewno, int zboze, int metal) {

    magazyny[0]->dodaj(zloto);
    magazyny[1]->dodaj(drewno);
    magazyny[2]->dodaj(zboze);
    magazyny[3]->dodaj(metal);

    cout << "Dodaje surowiec" << endl;

}

void CKrolestwo::stanMagazynow() {

    cout << "Stan twojego magazynu: \n Zloto: " << magazyny[0]->wypiszSurowiec() << " \n Drewno: " << magazyny[1]->wypiszSurowiec() << " \n Zboze: " << magazyny[2]->wypiszSurowiec() << "\n Metal: " << magazyny[3]->wypiszSurowiec() << endl;

}

bool CKrolestwo::czyStac(int zloto, int drewno, int zboze, int metal) {

    if(magazyny[0]->czyWystarczy(zloto) && magazyny[1]->czyWystarczy(drewno) && magazyny[2]->czyWystarczy(zboze) && magazyny[3]->czyWystarczy(metal)){
        return true;
    } else {
        if (magazyny[0]->czyWystarczy(zloto))  cout << "Masz za mało zlota" << endl;
        if (magazyny[1]->czyWystarczy(drewno))  cout << "Masz za mało drewna" << endl;
        if (magazyny[2]->czyWystarczy(zboze))  cout << "Masz za mało zboza" << endl;
        if (magazyny[3]->czyWystarczy(metal))  cout << "Masz za mało metalu" << endl;
        return false;
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

string CKrolestwo::wypiszNazwe() {

    return this->nazwa;

}

void CKrolestwo::dodajBudynek(CTeren* ktoryTeren, string typ) {

     budynki.push_back(ktoryTeren->dodajBudynek(typ));

}

void CKrolestwo::dodajMagazyny() {

    for(int i = 0; i < 4; i++){
        magazyny.push_back((CMagazyn*) powierzchnia[0]->dodajBudynek("magazyn"));
    }

}



