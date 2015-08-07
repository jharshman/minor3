/**
 * Package.h
 * written by Joshua Harshman
 * 05/08/15
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

                /* Modifiers */
                void setTrackingNumber(int trackingnumber);
                void setWeight(double weight);
                void setShippingCost(double shippingcost);
                
                /* Subroutines */
                string evaluateTrackingNumber();
                bool evaluateWeight();

                /* Abstract Subroutines */
                virtual double calculateShippingCost(){};

}; // end class Package

#endif
