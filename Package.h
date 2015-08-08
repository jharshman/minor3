//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_PACKAGE_H
#define MINOR3_5_PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

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
                int getTrackingNumber() const { return trackingnumber; }
                double getWeight() const { return weight; }

                /* Modifiers */
                void setTrackingNumber(int trackingnumber);
                void setWeight(double weight);
                void setShippingCost(double shippingcost);

                /* Subroutines */
                string evaluateTrackingNumber(int trackingnumber);
                bool evaluateWeight(double pweight, string ptype);

                /* Abstract Subroutines */
                virtual double calculateShippingCost(){};

};

#endif //MINOR3_5_PACKAGE_H
