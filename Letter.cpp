//
// Created by voodoo on 8/7/15.
//

#include "Letter.h"

/* Default Constructor */
Letter::Letter() {
    setTrackingNumber(0);
    setWeight(0.00);
    setName("unknown");
}

/* Constructor */
Letter::Letter(int trackingnumber, double weight, string name) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
    setName(name);
}

/* Copy Constructor */
Letter::Letter(const Letter &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
    setName(orig.getName());
}

