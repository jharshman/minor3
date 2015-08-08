//
// Created by voodoo on 8/8/15.
//

#include "WoodCrate.h"

/* Default Constructor */
WoodCrate::WoodCrate() {
    setTrackingNumber(0);
    setWeight(0.00);
}

/* Constructor */
WoodCrate::WoodCrate(int trackingnumber, double weight) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

/* Copy Constructor */
WoodCrate::WoodCrate(const WoodCrate &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
}


