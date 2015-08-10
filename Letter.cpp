/**
 * written by Joshua Harshman
 * */

#include "Letter.h"

/* Constructor */
Letter::Letter(int trackingnumber, double weight, string name) : Package(trackingnumber, weight) {
    setName(name);
}

/* setName */
void Letter::setName(string pname) {
    name = pname;
}
