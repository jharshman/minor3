/**
 * written by Joshua Harshman
 * */


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

public:
    /* Constructors and Destructors */
    Package()=default;
    Package(int trackingnumber, double weight);
    virtual ~Package()=default;

    /* Assessors */
    int getTrackingNumber() const { return trackingnumber; }
    double getWeight() const { return weight; }

    /* Modifiers */
    void setTrackingNumber(int trackingnumber);
    void setWeight(double weight);

    /* Virtual Functions */
    virtual string getName()=0;
    virtual double getCost() const { return 0.00; }
    virtual void setName(string name) { }

};

#endif //MINOR3_5_PACKAGE_H
