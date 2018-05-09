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
    float chronioneSurowce;

public:
     explicit CMagazyn(CKrolestwo*, float = 0, float = 1, float = 100);
    ~CMagazyn();
    bool czyWystarczy(int);
    void odejmij(int);
    int wypiszSurowiec();

    void stworz() override;
    void usun() override;

};

#endif //GRAOTRON_CMAGAZYN_H
