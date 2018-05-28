//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CPOLE_H
#define GRAOTRON_CPOLE_H

#include <vector>
#include <iostream>
#include "CBudynek.h"
#include "CMagazyn.h"
#include "CDom.h"
#include "CWytwornia.h"

using namespace std;

class CPole {

private:
    CKrolestwo* krolestwo;
    CBudynek* budynek;

public:

    CPole();
    ~CPole();
    void podejmijDecyzje();
    CBudynek* dodajBudynek(string);
    CBudynek* pokazBudynek();

};


#endif //GRAOTRON_CPOLE_H
