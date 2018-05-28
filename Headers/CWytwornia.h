//
// Created by christine on 07.05.18.
//

#ifndef GRAOTRON_CWYTWORNIA_H
#define GRAOTRON_CWYTWORNIA_H


#include <string>
#include "CBudynek.h"

class CWytwornia : public CBudynek {
private:
    int liczbaZatrudnionych;
    int maxZatrudnionych;
    double wspolWydobycia;
    string type;

public:
    CWytwornia(CKrolestwo*, string, int = 0, int = 10);
    ~CWytwornia();

    void dodajPracownika(int);
    void usunPracownika(int);

    int rozbuduj();
    void stworz() override;
    void usun() override;


};


#endif //GRAOTRON_CWYTWORNIA_H
