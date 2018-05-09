//
// Created by christine on 02.05.18.
//

#ifndef GRAOTRON_CKROLESTWO_H
#define GRAOTRON_CKROLESTWO_H

#include "CMagazyn.h"

//todo jak generowac budynki

class CKrolestwo {

private:
    string nazwa;
    int x, y; // połozenie stolicy
    int liczMieszkancow;
    vector <CBudynek*> budynki;
    vector <CMagazyn*> magazyny; // kolejnosc - zloto, drewno, zboże, metal
    //vector <COsoba*> osoby;
    double maxObrona;
    double obecnaObrona;
    const std::string nazwyKrolestw[7]{
            "Polnocy",
            "WyspiRzek",
            "Doliny",
            "Dorne",
            "Skaly",
            "Reach",
            "KrainaBurz"
    };

public:
    explicit CKrolestwo(int = 100, double = 100, double = 100);
    virtual ~CKrolestwo();

    void tura();
    void dodajSurowiec();
    void stanMagazynow();
    bool czyStac(int zloto, int drewno, int zboze, int metal);
    void wydajSurowiec(int zloto, int drewno, int zboze, int metal);
    void zbuduj();
};

#endif //GRAOTRON_CKROLESTWO_H
