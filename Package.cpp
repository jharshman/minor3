//
// Created by voodoo on 8/7/15.
//

#include "Package.h"

/* Default Constructor
Package::Package() {
    setTrackingNumber(0);
    setWeight(0.00);
    setName("default");

}

/* Constructor
Package::Package(int trackingnumber, double weight, string name) {
    setTrackingNumber(trackingnumber);
    setWeight(weight);
}

/* Copy Constructor
Package::Package(const Package &orig) {
    setTrackingNumber(orig.getTrackingNumber());
    setWeight(orig.getWeight());
}
*/
/* setTrackingNumber */
void Package::setTrackingNumber(int ptracking) {
    trackingnumber = ptracking;
}

/* setWeight */
void Package::setWeight(double pweight) {
    weight = pweight;
}

/* setName */
void Package::setName(string pname) {
    name = pname;
}

/* setShippingCost */
void Package::setShippingCost(double pcost) {
    shippingcost = pcost;
}


