//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_NULLPACKAGE_H
#define MINOR3_5_NULLPACKAGE_H

#include "Package.h"

class NullPackage : public Package {

public:
    /* Constructors and Destructors */
    NullPackage();
    NullPackage(int trackingnumber, double weight, string name);
    NullPackage(const NullPackage &orig);
    ~NullPackage(){}

};

#endif //MINOR3_5_NULLPACKAGE_H
