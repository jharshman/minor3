/**
 * written by Joshua Harshman
 * */

#include "Box.h"

/* Constructor */
Box::Box(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
    Logger log = Logger( LOGFILE, toString() );
}

/* setName */
void Box::setName(string name) {
    this->name = name;
}

/* toString */
string Box::toString() {
    stringstream out;
    out << "Package Type: " << getName() << endl;
    out << "Tracking Number: " << getTrackingNumber() << endl;
    out << "Weight: " << getWeight() << endl;
    return out.str();
}
