//
// Created by christine on 02.05.18.
//

#include "../Headers/CPlansza.h"

CPlansza::CPlansza(int xrozm, int yrozm) {

    xrozmiar = xrozm;
    yrozmiar = yrozm;

    srand(time(nullptr));

    teren = vector<vector<CTeren*>> (xrozmiar, vector<CTeren*>(yrozmiar, nullptr));

    cout << "Konstruktor CPlansza" << endl;
}

CPlansza::~CPlansza() {

    for (int i = (xrozmiar - 1); i >= 0; i--) {
        for (int j = (yrozmiar - 1); j >= 0 ; j--){
            delete teren[i][j];
            teren[i].erase(teren[i].begin() + j);
        }
        teren.erase(teren.begin() + i);
    }

    cout << "Destruktor CPlansza" << endl;

}

void CPlansza::generujPlansze() {
    for (int j = 0; j < yrozmiar; j++) {
        for (int i = 0; i < xrozmiar; i++) {
            CTeren *nowyTeren = new CTeren(i, j);
            teren[i][j] = nowyTeren;
        }
    }


}

void CPlansza::wyswietlPlansze() {

    for (int j = 0; j < yrozmiar; j++) {
        for (int i = 0; i < xrozmiar; i++) {

            cout << teren[i][j]->podajTresc();
        }
        cout << endl;

    }
}

CTeren* CPlansza::wybierzTeren() {

    int ktoryTerenx, ktoryTereny;
    do {
        ktoryTerenx = (rand() % teren.size());
        ktoryTereny = (rand() % teren[0].size());
    } while (teren[ktoryTerenx][ktoryTereny]->czyPrzypisane());

    teren[ktoryTerenx][ktoryTereny]->zmienPolozenie(ktoryTerenx, ktoryTereny);
    teren[ktoryTerenx][ktoryTereny]->podajPolozenie();
    teren[ktoryTerenx][ktoryTereny]->zmienTresc("|x");
    return teren[ktoryTerenx][ktoryTereny];

}

bool CPlansza::czyOtoczeniePrzypisane(int x, int y) {

    return false;
}
