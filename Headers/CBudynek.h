//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CBUDYNEK_H
#define GRAOTRON_CBUDYNEK_H

#include <iostream>
#include <vector>
#include "CKrolestwo.h"

using namespace std;

class CBudynek {
protected:

    int poziom;
    int kosztRozbudowy;
    CKrolestwo* wlasciciel;

public:

    explicit CBudynek(CKrolestwo*);
    virtual ~CBudynek();
    void rozbuduj();

    virtual void stworz() = 0;
    virtual void usun();

};

#endif //GRAOTRON_CBUDYNEK_H
