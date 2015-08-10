//
// Created by voodoo on 8/8/15.
//

#ifndef MINOR3_5_BOX_H
#define MINOR3_5_BOX_H

#define BOX_COST 2

#include "Package.h"

class Box final : public Package {

protected:
    string name;

public:
    /* Constructors and Destructors */
    Box()=default;
    Box(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() const override { return name; }
    double getCost() const override { return BOX_COST; }
    void setName(string name) override;

};

#endif //MINOR3_5_BOX_H
