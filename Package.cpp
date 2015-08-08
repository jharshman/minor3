//
// Created by voodoo on 8/7/15.
//

#include "Package.h"

/* Default Constructor */
Package::Package() {
        setTrackingNumber(0);
        setWeight(0.00);
}

/* Constructor */
Package::Package(int trackingnumber, double weight) {
        setTrackingNumber(trackingnumber);
        setWeight(weight);
}

/* Copy Constructor */
Package::Package(const Package &orig) {
        setTrackingNumber(orig.getTrackingNumber());
        setWeight(orig.getWeight());
}

/* setTrackingNumber */
void Package::setTrackingNumber(int ptracking) {
        trackingnumber = ptracking;
}

/* setWeight */
void Package::setWeight(double pweight) {
        weight = pweight;
}

/* setShippingCost */
void Package::setShippingCost(double pcost) {
        shippingcost = pcost;
}

/* evaluateTracking */
string Package::evaluateTrackingNumber(int ptracking) {
        return "Letter";
}

/* evaluateWeight */
bool Package::evaluateWeight(double pweight, string ptype) {
        return (pweight < ptype);
}

