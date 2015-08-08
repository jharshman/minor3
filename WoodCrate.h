//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_WOODCRATE_H
#define MINOR3_5_WOODCRATE_H

#include "Package.h"

class WoodCrate : public Package {

public:
    WoodCrate();
    WoodCrate(int trackingnumber, double weight);
    WoodCrate(const WoodCrate &orig);
    ~WoodCrate(){};

};

#endif //MINOR3_5_WOODCRATE_H
