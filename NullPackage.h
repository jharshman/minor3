//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_NULLPACKAGE_H
#define MINOR3_5_NULLPACKAGE_H

#define NULL_COST  0

#include "Package.h"

class NullPackage final : public Package {

protected:
    string name;

public:
    /* Constructors and Destructors */
    NullPackage()=default;
    NullPackage(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() const override { return name; }
    double getCost() const override { return NULL_COST; }
    void setName(string name) override;

};

#endif //MINOR3_5_NULLPACKAGE_H
