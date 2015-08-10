//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_WOODCRATE_H
#define MINOR3_5_WOODCRATE_H

#define WOODENCRATE_COST 10

#include "Package.h"

class WoodCrate final : public Package {

protected:
    string name;

public:
    WoodCrate()=default;
    WoodCrate(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() const override { return name; }
    double getCost() const override { return WOODENCRATE_COST; }
    void setName(string name) override;

};

#endif //MINOR3_5_WOODCRATE_H
