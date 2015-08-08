//
// Created by voodoo on 8/8/15.
//

#include "Box.h"

/* Default Constructor */
Box::Box() {
    setTrackingNumber(0);
    setWeight(0.00);
}

/* Constructor */
Box::Box(int trackingnumber, double weight) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

/* Copy Constructor */
Box::Box(const Box &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
}
