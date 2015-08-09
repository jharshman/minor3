//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_PACKAGE_H
#define MINOR3_5_PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

#define LETTER_WEIGHT 2
#define BOX_WEIGHT 40
#define WOODENCRATE_WEIGHT 80
#define METALCRATE_WEIGHT 100

class Package {

protected:
    /* Instance Variables */
    int trackingnumber;
    double weight;
    double shippingcost;
    string name;

public:
    /* Constructors and Destructors */
    /*
    Package();
    Package(int trackingnumber, double weight, string name);
    Package(const Package &orig);
     */
    ~Package(){ std::cout << "VERBOSE: Destroying Package" << endl; }

    /* Accessors */
    int getTrackingNumber() const { return trackingnumber; }
    double getWeight() const { return weight; }
    string getName() const { return name; };

    /* Modifiers */
    void setTrackingNumber(int trackingnumber);
    void setWeight(double weight);
    void setShippingCost(double shippingcost);
    void setName(string name);

    /* Abstract Subroutines */
    //virtual double calculateShippingCost()=0;

};

#endif //MINOR3_5_PACKAGE_H
