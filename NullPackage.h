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
    NullPackage(int trackingnumber, double weight);
    NullPackage(const NullPackage &orig);
    ~NullPackage(){};

    /* Accessors */
    int getTrackingNumber() const { return trackingnumber; }
    double getWeight() const { return weight; }
    double getShippingCost() const { return weight; }

};

#endif //MINOR3_5_NULLPACKAGE_H
