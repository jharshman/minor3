//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_METALCRATE_H
#define MINOR3_5_METALCRATE_H

#include "Package.h"

class MetalCrate : public Package {

public:
    MetalCrate();
    MetalCrate(int trackingnumber, double weight, string name);
    MetalCrate(const MetalCrate &orig);
    ~MetalCrate(){}

};

#endif //MINOR3_5_METALCRATE_H
