//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_LETTER_H
#define MINOR3_5_LETTER_H

#include "Package.h"

class Letter : public Package {

public:
    /* Constructors and Destructors */
    Letter();
    Letter(int trackingnumber, double weight, string name);
    Letter(const Letter &orig);
    ~Letter(){}
};

#endif //MINOR3_5_LETTER_H
