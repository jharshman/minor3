/**
 * written by Joshua Harshman
 * */

#include "MetalCrate.h"

/* Constructor */
MetalCrate::MetalCrate(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
    Logger log = Logger( LOGFILE, toString() );
}

/* setName */
void MetalCrate::setName(string name) {
    this->name = name;
}

/* toString */
string MetalCrate::toString() {
    stringstream out;
    out << "Package Type: " << getName() << endl;
    out << "Tracking Number: " << getTrackingNumber() << endl;
    out << "Weight: " << getWeight() << endl;
    return out.str();
}
