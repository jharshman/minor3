/**
 * written by Joshua Harshman
 * */

#include "Package.h"

/* Constructor */
Package::Package(int trackingnumber, double weight) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

/* setTrackingNumber */
void Package::setTrackingNumber(int ptracking) {
    trackingnumber = ptracking;
}

/* setWeight */
void Package::setWeight(double pweight) {
    weight = pweight;
}


