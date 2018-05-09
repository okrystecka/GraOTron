//
// Created by christine on 02.05.18.
//

#ifndef GRAOTRON_CGRA_H
#define GRAOTRON_CGRA_H

#include "CPlansza.h"
#include "CKrolestwo.h"

class CGra
{

private:
    std::vector <CKrolestwo*> krolestwa;
    CPlansza *plansza;

public:
    CGra();
    ~CGra();
    void menu();
    void nowaGra(int lKrolestw);
    void update();
    void tura();

};

#endif //GRAOTRON_CGRA_H
