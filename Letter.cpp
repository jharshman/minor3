/**
 * written by Joshua Harshman
 * */

#include "Letter.h"

/* Constructor */
Letter::Letter(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);

    //log creation
    Logger log = Logger( LOGFILE, toString() );
}

/* setName */
void Letter::setName(string name) {
    this->name = name;
}

/* toString */
string Letter::toString() {
    stringstream out;
    out << "Package Type: " << getName() << endl;
    out << "Tracking Number: " << getTrackingNumber() << endl;
    out << "Weight: " << getWeight() << endl;
    return out.str();
}