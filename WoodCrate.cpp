/**
 * written by Joshua Harshman
 * */

#include "WoodCrate.h"

/* Constructor */
WoodCrate::WoodCrate(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
    Logger log = Logger( LOGFILE, toString() );
}

/* setName */
void WoodCrate::setName(string name) {
    this->name = name;
}

/* toString */
string WoodCrate::toString() {
    stringstream out;
    out << "Package Type: " << getName() << endl;
    out << "Tracking Number: " << getTrackingNumber() << endl;
    out << "Weight: " << getWeight() << endl;
    return out.str();
}
