//
// Created by christine on 28.05.18.
//

#ifndef GRAOTRON_CPOSEL_H
#define GRAOTRON_CPOSEL_H


#include "COsoba.h"

class CPosel : public COsoba{

private:


public:
    CPosel(CKrolestwo*, CTeren*);
    ~CPosel();

    void handluj();
    void stworzSojusz();
    void wypowiedzWojne();

};


#endif //GRAOTRON_CPOSEL_H
