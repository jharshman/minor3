//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_BOX_H
#define MINOR3_5_BOX_H

#include "Package.h"

class Box : public Package {

public:
    /* Constructors and Destructors */
    Box();
    Box(int trackingnumber, double weight, string name);
    Box(const Box &orig);
    ~Box(){}
};

#endif //MINOR3_5_BOX_H
