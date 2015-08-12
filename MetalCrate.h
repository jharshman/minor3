//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_METALCRATE_H
#define MINOR3_5_METALCRATE_H

#define METALCRATE_COST 3.00

#include "Package.h"
#include "Logger.h"

class MetalCrate final : public Package {

protected:
    string name;

public:
    MetalCrate()=default;
    MetalCrate(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() { return name; }
    double getCost() const override { return (getWeight() * METALCRATE_COST); }
    void setName(string name) override;
    string toString();
};

#endif //MINOR3_5_METALCRATE_H
