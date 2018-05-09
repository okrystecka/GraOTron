//
// Created by christine on 04.05.18.
//

#include "../Headers/CBudynek.h"
#include "../Headers/CKrolestwo.h"

CBudynek::CBudynek(CKrolestwo* wlasc) {

    wlasciciel = wlasc;
    cout << "Konstruktor CBudynek" << endl;

}

CBudynek::~CBudynek() {

    cout << "Destruktor CBudynek" << endl;

}

void CBudynek::rozbuduj() {
    if (poziom == 10) {
        cout << "Budynek juz jest maksymalnie rozbudowany" << endl;
    } else {
        if (wlasciciel->czyStac(1, 1, 1, 1)) {
            wlasciciel->wydajSurowiec(1, 1, 1, 1); //todo przeliczac koszt rozbudowy w zaleznosci od poziomu
            poziom += 1;
            cout << "Rozbudowuje budynek" << endl;
        } else {
            cout << ", nie mozesz rozbudowac tego budynku :<" << endl;
        }

    }
}

void CBudynek::stworz() {

}

void CBudynek::usun() {

}

