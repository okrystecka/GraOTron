//
// Created by christine on 04.05.18.
//

#include "../Headers/CPole.h"

CPole::CPole() {

    budynek = nullptr;
    cout << "Konstruktor CPole" << endl;

}

CPole::~CPole() {
    delete budynek;
    cout << "Destruktor CPole" << endl;

}

void CPole::podejmijDecyzje() {

}

CBudynek* CPole::dodajBudynek(string typ) {

    if (typ == "magazyn") {

        this->budynek = new CMagazyn(krolestwo);
        return this->budynek;

    } else if (typ == "dom"){

        this->budynek = new CDom(krolestwo);
        return this->budynek;

    } else if (typ == "wytwornia"){ // gdy beda rozne wytwornie wystarczy dodac else ify

        this->budynek = new CWytwornia(krolestwo, typ);
        return this->budynek;

    } else {

        cout << "Zly typ tworzonego budynku" << endl;
        return nullptr;
    }
}

CBudynek* CPole::pokazBudynek() {

    if (budynek == nullptr){
        //cout << " W danym polu nie ma żadnego budynku" << endl;
        return nullptr;
    } else {
        cout << "W tym polu jest budynek" << endl;
        return budynek;
    }

}
