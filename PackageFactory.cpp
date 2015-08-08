//
// Created by voodoo on 8/7/15.
//

#include "PackageFactory.h"
#include "NullPackage.h"

class PackageFactory {
public:
    /* Enumerated Package Types */
    enum PACKAGE_TYPES {
        LETTER = 0,
        BOX = 1,
        WOODENCRATE = 2,
        METALCRATE = 3
    };

    /* Factory creatPackage */
    Package *createPackage(int trackingnumber, double weight) {

        int eval = trackingnumber % 10;
        switch(eval) {
            case LETTER:
                if(weight <= LETTER_WEIGHT)
                    return new Letter(trackingnumber, weight);
                else
                    break; // NOTE: this should throw an exception
            /*case BOX:
                if(weight <= BOX_WEIGHT)
                    return new Box(trackingnumber, weight);
                else
                    break;
            case WOODENCRATE:
                if(weight <= WOODENCRATE_WEIGHT)
                    return new WoodenCrate(trackingnumber, weight);
                else
                    break;
            case METALCRATE:
                if(weight <= METALCRATE_WEIGHT)
                    return new MetalCrate(trackingnumber, weight);
                else
                    break;*/
            default:
                return new NullPackage(trackingnumber, weight);
        } // end switch

    }

};
