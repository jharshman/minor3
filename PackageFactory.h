//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_PACKAGEFACTORY_H
#define MINOR3_5_PACKAGEFACTORY_H
#include "Package.h"
#include "Letter.h"
#include "Box.h"
#include "WoodCrate.h"
#include "MetalCrate.h"
#include "NullPackage.h"

class PackageFactory {

enum PACKAGE_TYPES {
    LETTER = 0,
    BOX = 1,
    WOODENCRATE = 2,
    METALCRATE = 3
};

public:
    /* Constructors and Destructors */

    /* Subroutines */
    Package *createPackage(int trackingnumber, double weight);
};
#endif //MINOR3_5_PACKAGEFACTORY_H
