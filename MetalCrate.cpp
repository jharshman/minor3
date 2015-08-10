/**
 * written by Joshua Harshman
 * */

#include "MetalCrate.h"

/* Constructor */
MetalCrate::MetalCrate(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
}

/* setName */
void MetalCrate::setName(string name) {
    this->name = name;
}
