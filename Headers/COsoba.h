//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_COSOBA_H
#define GRAOTRON_COSOBA_H

#include <iostream>
#include <vector>

using namespace std;

class CKrolestwo;
class CTeren;

class COsoba {

private:
    int maxZycie;
    int obecneZycie;
    CKrolestwo* krolestwo;
    CTeren* pozycja;


public:
    COsoba(CKrolestwo*, CTeren*, int = 100, int = 100);
    virtual ~COsoba();

    void odejmijZycie(int);
    void zmienPozycje(CTeren*);
    CTeren* podajPozycje();
    CKrolestwo* podajKrolestwo();

};


#endif //GRAOTRON_COSOBA_H
