//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_METALCRATE_H
#define MINOR3_5_METALCRATE_H

#define METALCRATE_COST 20

#include "Package.h"

class MetalCrate final : public Package {

protected:
    string name;

public:
    MetalCrate()=default;
    MetalCrate(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() { return name; }
    double getCost() const override { return METALCRATE_COST; }
    void setName(string name) override;

};

#endif //MINOR3_5_METALCRATE_H
