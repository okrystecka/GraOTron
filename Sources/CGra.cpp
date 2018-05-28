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

    for (int i = (size - 1); i >= 0; i--){
        delete krolestwa[i];
        krolestwa.erase(krolestwa.begin() + i);
    }

    cout << "Papa ;( Destruktor CGra" << endl;

}

void CGra::menu() {

    int opcja;
    int lKrolestw = 3;

    cout << "Witaj w menu! Wybierz jedna z opcji: \n 1 - Nowa Gra \n 9 - Wyjście z gry" << endl;
    //cin >> opcja;
    opcja = 1;

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
    } while (opcja != 1 && opcja != 9); //todo sprawdzić kiedy zachodzi warunek

}

void CGra::nowaGra(int lKrolestw) {

    cout << "Nowa gra" << endl;
    plansza = new CPlansza;
    plansza->generujPlansze();

    for (int i = 0; i < lKrolestw; i++) {

        CKrolestwo* krolestwo;
        krolestwo = new CKrolestwo(plansza->wybierzTeren());
        krolestwa.push_back(krolestwo);
        cout << "Stworzono krolestwo nr " << i << endl;

    }

    plansza->wyswietlPlansze();
}


void CGra::update() {

}

void CGra::tura() {

    cout << "Nowa tura" << endl;
    cout << "Wybierz czynność: " << endl;


}