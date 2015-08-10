/**
 * written by Joshua Harshman
 * */

#ifndef MINOR3_5_LETTER_H
#define MINOR3_5_LETTER_H

#define LETTER_COST 0.5

#include "Package.h"

class Letter final : public Package {

protected:
    string name;

public:
    /* Constructors and Destructors */
    Letter()=default;
    Letter(int trackingnumber, double weight, string name);

    /* Virtual Implementations */
    string getName() const override { return name; }
    double getCost() const override { return LETTER_COST; }
    void setName(string name) override;

};

#endif //MINOR3_5_LETTER_H
