//
// Created by voodoo on 8/8/15.
//

#include "Box.h"

/* Default Constructor */
Box::Box() {
    setTrackingNumber(0);
    setWeight(0.00);
    setName("unknown");
}

/* Constructor */
Box::Box(int trackingnumber, double weight, string name) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
    setName(name);
}

/* Copy Constructor */
Box::Box(const Box &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
    setName(orig.getName());
}

