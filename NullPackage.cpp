
#include "NullPackage.h"

/* Constructor */
NullPackage::NullPackage(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
}

/* setName */
void NullPackage::setName(string name) {
    this->name = name;
}
