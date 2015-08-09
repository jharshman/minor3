//
// Created by voodoo on 8/8/15.
//

#include "WoodCrate.h"

/* Default Constructor */
WoodCrate::WoodCrate() {
    setTrackingNumber(0);
    setWeight(0.00);
    setName("unkown");
}

/* Constructor */
WoodCrate::WoodCrate(int trackingnumber, double weight, string name) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
    setName(name);
}

/* Copy Constructor */
WoodCrate::WoodCrate(const WoodCrate &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
    setName(orig.getName());
}

