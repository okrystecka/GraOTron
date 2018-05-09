//
// Created by christine on 04.05.18.
//

#include "../Headers/CPole.h"

CPole::CPole() {

    budynek = new CBudynek;
    cout << "Konstruktor CPole" << endl;

}

CPole::~CPole() {

    cout << "Destruktor CPole" << endl;

}

void CPole::podejmijDecyzje() {

}

void CPole::pokazBudynek() {

    if (budynek == nullptr){
        cout << " W danym polu nie ma żadnego budynku" << endl;
    } else {
        cout << "W tym polu jest budynek" << endl;
    }

}
