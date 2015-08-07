/**
 * Package.cpp
 * written by Joshua Harshman
 * 08/06/15
 * */

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
        setWeight(orig.getWeight);
}

/* setTrackingNumber */
void setTrackingNumber(int ptracking) {
        trackingnumber = ptracking;
}

/* setWeight */
void setWeight(double pweight) {
        weight = pweight;
}

/* setShippingCost */
void setShippingCost(double pcost) {
        shippingcost = pcost;
}

/* evaluateTracking */
string evaluateTrackingNumber(int ptracking) {
        return "Letter";
}

/* evaluateWeight */
bool evaluateWeight(double pweight, string ptype) {
        return (pweight < ptype);
}


