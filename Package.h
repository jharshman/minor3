/**
 * Package.h
 * written by Josh Harshman
 * 05/08/15
 * */

#ifndef __PACKAGE_H__
#define __PACKAGE_H__

class Package {

        private:
                /* Instance Variables */
                int trackingnumber; 
                double weight;
                double shippingcost;

        public:
                /* Accessors */
                int getTrackingNumber() { return trackingnumber; }
                double getWeight() { return weight; }
                double getShippingCost() { return shippingcost; }

                /* Modifiers */
                void setTrackingNumber(int trackingnumber);
                void setWeight(double weight);
                void setShippingCost(double shippingcost);

} // end class Package
