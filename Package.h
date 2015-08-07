/**
 * Package.h
 * written by Joshua Harshman
 * 08/05/15
 * */

#ifndef __PACKAGE_H__
#define __PACKAGE_H__

#define LETTER 2
#define BOX 40
#define WOODENCRATE 80
#define METALCRATE 100

class Package {

        protected:
                /* Instance Variables */
                int trackingnumber; 
                double weight;
                double shippingcost;

        public:
                /* Constructors and Destructors */
                Package();
                Package(int trackingnumber, double weight);
                Package(const Package &orig);
                ~Package(){ std::cout << "VERBOSE: Destroying Package" << endl; }

                /* Accessors */
                int getTrackingNumber() { return trackingnumber; }
                double getWeight() { return weight; }

                /* Modifiers */
                void setTrackingNumber(int trackingnumber);
                void setWeight(double weight);
                void setShippingCost(double shippingcost);
                
                /* Subroutines */
                string evaluateTrackingNumber(int trackingnumber);
                bool evaluateWeight();

                /* Abstract Subroutines */
                virtual double calculateShippingCost(){};

}; // end class Package

#endif
