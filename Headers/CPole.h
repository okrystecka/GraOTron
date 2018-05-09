//
// Created by christine on 04.05.18.
//

#ifndef GRAOTRON_CPOLE_H
#define GRAOTRON_CPOLE_H

#include <vector>
#include <iostream>
#include "CBudynek.h"

using namespace std;

class CPole {

private:

    CBudynek* budynek;

public:

    CPole();
    ~CPole();
    void podejmijDecyzje();
    void pokazBudynek();

};


#endif //GRAOTRON_CPOLE_H
