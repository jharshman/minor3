//
// Created by voodoo on 8/7/15.
//

#include "PackageFactory.h"

/* Factory createPackage */
Package* PackageFactory::createPackage(int trackingnumber, double weight) {

    Package *package = NULL;
    int eval = trackingnumber % 10;

    switch(eval) {

        case PackageFactory::LETTER:
            if (weight <= LETTER_WEIGHT) {
                package = new Letter(trackingnumber, weight, "Letter");
                break;
            }
            else
                break;
        case PackageFactory::BOX:
            if(weight <= BOX_WEIGHT) {
                package = new Box(trackingnumber, weight, "Box");
                break;
            }
            else
                break;
        case PackageFactory::WOODENCRATE:
            if(weight <= WOODENCRATE_WEIGHT) {
                package = new WoodCrate(trackingnumber, weight, "Wooden Crate");
                break;
            }
            else
                break;
        case PackageFactory::METALCRATE:
            if(weight <= METALCRATE_WEIGHT) {
                package = new MetalCrate(trackingnumber, weight, "Metal Crate");
                break;
            }
            else
                break;
        default:
            package = new NullPackage(trackingnumber, weight, "Unknown Package");

    } // end switch

    return package;

}


