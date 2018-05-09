//
// Created by christine on 02.05.18.
//

#include "../Headers/CGra.h"

CGra::CGra() {
    cout << "Witaj w Grze o tron! Konstruktor CGra" << endl;

}

CGra::~CGra() {
    delete plansza;

    int size = static_cast<int>(krolestwa.size());

    for (int i = 0; i < size; i++){
        delete krolestwa[i];
        krolestwa.erase(krolestwa.begin() + krolestwa.size() - 1);
    }

    cout << "Papa ;( Destruktor CGra" << endl;

}

void CGra::update() {

}

void CGra::tura() {

    cout << "Nowa tura" << endl;

}

void CGra::nowaGra(int lKrolestw) {

    cout << "Nowa gra" << endl;
    plansza = new CPlansza;
    for (int i = 0; i < lKrolestw; i++) {

        CKrolestwo* krolestwo;
        krolestwo = new CKrolestwo();
        krolestwa.push_back(krolestwo);
        cout << "Stworzono krolestwo nr " << i << endl;

    }

    plansza->generujPlansze();
}


void CGra::menu() {

    int opcja;
    int lKrolestw = 3;

    cout << "Witaj w menu! Wybierz jedna z opcji: \n 1 - Nowa Gra \n 9 - Wyjście z gry" << endl;
    cin >> opcja;

    do {
        switch (opcja) {

            case 1:
                cout << "Wchodzisz w nowa gre" << endl;
                nowaGra(lKrolestw);
                break;

            case 9:
                cout << "Wychodzisz z gry" << endl;
                break;

            default:
                cout << "Wybierz jedna z opcji" << endl;
                break;
        }
    } while (opcja != 1 && opcja != 9);

}