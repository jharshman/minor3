
#include "NullPackage.h"

/* Constructor */
NullPackage::NullPackage(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
    Logger log = Logger( LOGFILE, toString() );
}

/* setName */
void NullPackage::setName(string name) {
    this->name = name;
}

/* toString */
string NullPackage::toString() {
    stringstream out;
    out << "Package Type: " << getName() << endl;
    out << "Tracking Number: " << getTrackingNumber() << endl;
    out << "Weight: " << getWeight() << endl;
    return out.str();
}
