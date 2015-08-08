//
// Created by voodoo on 8/8/15.
//

#include "MetalCrate.h"

/* Default Constructor */
MetalCrate::MetalCrate() {
    setTrackingNumber(0);
    setWeight(0.00);
}

/* Constructor */
MetalCrate::MetalCrate(int trackingnumber, double weight) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

/* Copy Constructor */
MetalCrate::MetalCrate(const MetalCrate &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
}


