//
// Created by christine on 02.05.18.
//

#ifndef GRAOTRON_CPLANSZA_H
#define GRAOTRON_CPLANSZA_H

#include "CTeren.h"

class CPlansza {

private:
    int xrozmiar, yrozmiar;
    vector<vector<CTeren*>> teren;

public:
    explicit CPlansza(int = 5, int = 5);
    ~CPlansza();
    void generujPlansze();
    void wyswietlPlansze();

};


#endif //GRAOTRON_CPLANSZA_H
