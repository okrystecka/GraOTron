//
// Created by christine on 07.05.18.
//

#ifndef GRAOTRON_CDOM_H
#define GRAOTRON_CDOM_H


#include "CBudynek.h"

class CDom : public CBudynek{

private:
    int liczbaMieszkancow;
    int maxMieszkancow;
    int wspolPodatkow;

public:
    explicit CDom(CKrolestwo*, int = 0);
    ~CDom();

    int rozbuduj() override;
    void dodajMieszkanca(int);
    void stworz() override;
    void usun() override;
};


#endif //GRAOTRON_CDOM_H
