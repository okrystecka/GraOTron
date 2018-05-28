//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CBUDYNEK_H
#define GRAOTRON_CBUDYNEK_H

#include <iostream>
#include <vector>

using namespace std;

class CKrolestwo;

class CBudynek {
protected:

    int poziom;
    int kosztRozbudowy[3]; //todo sprawdzić i ustystematyzowac koszty w budynkach, koszty utrzymania???
    int kosztUtrzymania[3];
    CKrolestwo* wlasciciel;

public:

    explicit CBudynek(CKrolestwo*);
//    virtual ~CBudynek();
    ~CBudynek();

    enum typ{
        magazyn,
        dom,
        wytwornia
    };

    virtual int rozbuduj();

    virtual void stworz() = 0;
    virtual void usun() = 0;

};

#endif //GRAOTRON_CBUDYNEK_H
