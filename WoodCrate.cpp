/**
 * written by Joshua Harshman
 * */

#include "WoodCrate.h"

/* Constructor */
WoodCrate::WoodCrate(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
}

/* setName */
void WoodCrate::setName(string name) {
    this->name = name;
}
