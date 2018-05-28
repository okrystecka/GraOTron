//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CMAGAZYN_H
#define GRAOTRON_CMAGAZYN_H


#include <string>
#include "CBudynek.h"

class CMagazyn : public CBudynek {
private:
    float liczSurowca;
    float prodSurowca;
    float maxSurowca;
    float chronioneSurowce;

public:
     explicit CMagazyn(CKrolestwo*, float = 0, float = 10, float = 1000, float = 100);
    ~CMagazyn();
    bool czyWystarczy(int);
    void odejmij(int);
    void dodaj(int);
    float wypiszSurowiec();

    int rozbuduj();
    void stworz() override;
    void usun() override;

};

#endif //GRAOTRON_CMAGAZYN_H
