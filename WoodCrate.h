//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_WOODCRATE_H
#define MINOR3_5_WOODCRATE_H

#define WOODENCRATE_COST 2.50

#include "Package.h"
#include "Logger.h"

class WoodCrate final : public Package {

protected:
    string name;

public:
    WoodCrate()=default;
    WoodCrate(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() { return name; }
    double getCost() const override { return (getWeight() * WOODENCRATE_COST); }
    void setName(string name) override;
    string toString();
};

#endif //MINOR3_5_WOODCRATE_H
