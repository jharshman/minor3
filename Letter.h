/**
 * Letter.h
 * written by Joshua Harshman
 * 08/05/15
 * */

#ifndef __LETTER_H__
#define __LETTER_H__

#define COST .05

class Letter: public Package {

        public:
                /* Constructors and Destructors */
                Letter();
                Letter(int trackingnumber, double weight);
                Letter(const Letter &orig);
                ~Letter() {};
                
                /* Accessors */
                int getTrackingNumber() { return trackingnumber; }
                double getWeight() { return weight; }
                double getShippingCost() { return shippingcost };

                /* Abstract Implementations */
                double calculateShippingCost() {
                        return (getWeight() * COST);
                }

}; // end class Package

#endif
