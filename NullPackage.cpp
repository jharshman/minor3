//
// Created by voodoo on 8/7/15.
//

#include "NullPackage.h"

/* Default Constructor */
NullPackage::NullPackage() {
    setTrackingNumber(0);
    setWeight(0.00);
    setName("unknown");
}

/* Constructor */
NullPackage::NullPackage(int trackingnumber, double weight, string name) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
    setName(name);
}

/* Copy Constructor */
NullPackage::NullPackage(const NullPackage &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
    setName(orig.getName());
}


