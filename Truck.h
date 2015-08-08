//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_TRUCK_H
#define MINOR3_5_TRUCK_H

#include <string>
#include "Package.h"
using namespace std;

class Truck {

private:
    /* Instance Variables */
    string name;
    string ocity;
    string dcity;
    string altinfo;
    int numpackages;
    double full;
    double unloaded;

public:
    /* Constructors and Destructors */
    Truck();
    Truck(string driver, double unloaded, string ocity, string dcity);
    ~Truck(){};
    Truck(const Truck &orig);

    /* Accessors */
    string getName() const { return name; }
    string getOriginCity() const {return ocity; }
    string getDestCity() const { return dcity; }
    string getAltInfo() const { return altinfo; }
    int getNumPackages() const { return numpackages; }
    double getFullWeight() const { return full; }
    double getUnloadedWeight() const { return unloaded; }

    /* Modifiers */
    void setName(string name);
    void setOriginCity(string ocity);
    void setDestCity(string dcity);
    void setAltInfo(string altinfo);
    void setNumPackages(int numpackages);
    void setFullWeight(double full);
    void setUnloadedWeight(double unloaded);


};

#endif //MINOR3_5_TRUCK_H
