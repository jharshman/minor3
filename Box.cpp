/**
 * written by Joshua Harshman
 * */

#include "Box.h"

/* Constructor */
Box::Box(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
}

/* setName */
void Box::setName(string name) {
    this->name = name;
}

