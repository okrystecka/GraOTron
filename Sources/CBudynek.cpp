//
// Created by christine on 04.05.18.
//

#include "../Headers/CBudynek.h"
#include "../Headers/CKrolestwo.h"

CBudynek::CBudynek(CKrolestwo* wlasc) {

    kosztRozbudowy[0] = 0;
    kosztRozbudowy[1] = 20;
    kosztRozbudowy[2] = 5;
    kosztRozbudowy[3] = 10;

    kosztUtrzymania[0] = 2;
    kosztUtrzymania[1] = 0;
    kosztUtrzymania[2] = 0;
    kosztUtrzymania[3] = 0;

    wlasciciel = wlasc;
    cout << "Konstruktor CBudynek" << endl;

}

CBudynek::~CBudynek() {

    cout << "Destruktor CBudynek" << endl;

}

int CBudynek::rozbuduj() {
    if (poziom == 10) {
        cout << "Budynek juz jest maksymalnie rozbudowany" << endl;
        return 0;
    } else {
        if (wlasciciel->czyStac(1, 1, 1, 1)) {
            wlasciciel->wydajSurowiec(1, 1, 1, 1); //todo przeliczac koszt rozbudowy w zaleznosci od poziomu
            poziom += 1;
            cout << "Rozbudowuje budynek" << endl;
            return 1;
        } else {
            cout << ", nie mozesz rozbudowac tego budynku :<" << endl;
            return 0;
        }

    }
}

