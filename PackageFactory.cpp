//
// Created by Josh on 8/7/15.
//

#include "PackageFactory.h"

/* Factory createPackage */
Package* PackageFactory::createPackage(int trackingnumber, double weight) {

    Package *package = NULL;
    int eval = trackingnumber % 10;

    switch(eval) {

        case PackageFactory::LETTER:
            if (weight <= LETTER_WEIGHT) {
                package = new Letter(trackingnumber, (weight/16), "Letter"); // TODO: convert to pounds before passing
                break;
            }
            else
                throw NullPackage(trackingnumber, weight, "UNKNOWN. NOT LOADED");
        case PackageFactory::BOX:
            if(weight <= BOX_WEIGHT) {
                package = new Box(trackingnumber, weight, "Box");
                break;
            }
            else
                throw NullPackage(trackingnumber, weight, "UNKNOWN. NOT LOADED");
        case PackageFactory::WOODENCRATE:
            if(weight <= WOODENCRATE_WEIGHT) {
                package = new WoodCrate(trackingnumber, weight, "Wooden Crate");
                break;
            }
            else
                throw NullPackage(trackingnumber, weight, "UNKNOWN.  NOT LOADED");
        case PackageFactory::METALCRATE:
            if(weight <= METALCRATE_WEIGHT) {
                package = new MetalCrate(trackingnumber, weight, "Metal Crate");
                break;
            }
            else
                throw NullPackage(trackingnumber, weight, "UNKNOWN.  NOT LOADED");
        default:
            throw NullPackage(trackingnumber, weight, "UNKNOWN.  NOT LOADED");

    } // end switch

    return package;

}


