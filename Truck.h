//
// Created by voodoo on 8/7/15.
//

#ifndef MINOR3_5_TRUCK_H
#define MINOR3_5_TRUCK_H

#include <vector>
#include <list>
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
    int maxpkgs;
    double full;
    double unloaded;
    vector<Package*> cargoList;

public:
    /* Constructors and Destructors */
    Truck();
    Truck(string driver, double unloaded, string ocity, string dcity, int maxpkgs);
    ~Truck(){}
    Truck(const Truck &orig);

    /* Accessors */
    string getName() const { return name; }
    string getOriginCity() const {return ocity; }
    string getDestCity() const { return dcity; }
    string getAltInfo() const { return altinfo; }
    int getMaxPkgs() const { return maxpkgs; }
    double getFullWeight() const { return full; }
    double getUnloadedWeight() const { return unloaded; }

    /* Modifiers */
    void setName(string name);
    void setOriginCity(string ocity);
    void setDestCity(string dcity);
    void setAltInfo(string altinfo);
    void setMaxPkgs(int maxpkgs);
    void setFullWeight(double full);
    void setUnloadedWeight(double unloaded);

    /* Subroutines */
    void addCargo(Package **pkg);
    void printCargo();
    string toString();

};

#endif //MINOR3_5_TRUCK_H
