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
            package = new Letter(trackingnumber, weight);
            break;
        }
        else {
            break;
        }
        default:
            package = new NullPackage(trackingnumber, weight);

    } // end switch

    return package;

}


