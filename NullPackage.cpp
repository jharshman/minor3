//
// Created by voodoo on 8/7/15.
//

#include "NullPackage.h"

NullPackage::NullPackage() {
    setTrackingNumber(0);
    setWeight(0.00);
}

NullPackage::NullPackage(int trackingnumber, double weight) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

NullPackage::NullPackage(const NullPackage &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
}


