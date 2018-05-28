//
// Created by christine on 28.05.18.
//

#ifndef GRAOTRON_CZOLNIERZ_H
#define GRAOTRON_CZOLNIERZ_H


#include "COsoba.h"

class CZolnierz : public COsoba {
private:
    int atak;
    int obrona;
    int koszt[3];

public:
    CZolnierz(CKrolestwo*, CTeren*);
    ~CZolnierz();
    bool atakuj();
    bool bron();

};


#endif //GRAOTRON_CZOLNIERZ_H
