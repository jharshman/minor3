//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_LETTER_H
#define MINOR3_5_LETTER_H

#include "Package.h"

#define COST 0.5

class Letter : public Package {

        public:
                /* Constructors and Destructors */
                Letter();
                Letter(int trackingnumber, double weight);
                Letter(const Letter &orig);
                ~Letter() {};

                /* Accessors */
                int getTrackingNumber() const { return trackingnumber; }
                double getWeight() const { return weight; }
                double getShippingCost() const { return shippingcost; };

                /* Abstract Implementations */
                double calculateShippingCost() {
                        return (getWeight() * COST);
                }

};

#endif //MINOR3_5_LETTER_H
