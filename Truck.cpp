//
// Created by voodoo on 8/7/15.
//

#include "Truck.h"
#include "Logger.h"

/* Default Constructor */
Truck::Truck() {
    setName("default");
    setOriginCity("default");
    setDestCity("default");
    setFullWeight(0.00);
}

/* Constructor */
Truck::Truck(string driver, double unloaded, string ocity, string dcity, int maxpkgs) {
    setName(driver);
    setUnloadedWeight(unloaded);
    setOriginCity(ocity);
    setDestCity(dcity);
    setMaxPkgs(maxpkgs);

    // log this
    Logger log = Logger( LOGFILE, toString() );
}

/* Copy Constructor */
Truck::Truck(const Truck &orig) {
    setName(orig.getName());
    setUnloadedWeight(orig.getUnloadedWeight());
    setOriginCity(orig.getOriginCity());
    setDestCity(orig.getDestCity());
}

/* setName */
void Truck::setName(string pname) {
    name = pname;
}

/* setOriginCity */
void Truck::setOriginCity(string pcity) {
    ocity = pcity;
}

/* setDestCity */
void Truck::setDestCity(string pcity) {
    dcity = pcity;
}

/* setAltInfo */
void Truck::setAltInfo(string pinfo) {
    altinfo = pinfo;
}

/* setMaxPkgs */
void Truck::setMaxPkgs(int pnum) {
    maxpkgs = pnum;
}

/* setNumPkgs */
void Truck::setNumPkgs(int pnumpkgs) {
    numpkgs = pnumpkgs;
}

/* setFullWeight */
void Truck::setFullWeight(double pweight) {
    full = pweight;
}

/* setUnloadedWeight */
void Truck::setUnloadedWeight(double pweight) {
    unloaded = pweight;
}

/* addCargo */
void Truck::addCargo(Package **pkg) {
    setNumPkgs((getNumPkgs() + 1));
    if(getNumPkgs() > getMaxPkgs())
        throw NullPackage((*pkg)->getTrackingNumber(), (*pkg)->getWeight(), "NOT LOADING. TRUCK FULL");
    full += (*pkg)->getWeight();
    totalCost += (*pkg)->getCost();
    cargoList.push_back(*pkg);
}

/* printTruckLoadAndDrive */
void Truck::printTruckLoadAndDrive() {
    stringstream out;
    out << "Loaded Truck Weight: " << getFullWeight() + getUnloadedWeight() << " lbs" << endl;
    out << "Driving Truck from: " << getOriginCity() << endl;
    out << "Arrived at: " << getDestCity() << endl;
    out << "Total Cost: " << getTotalCost() << endl;
    Logger log = Logger(LOGFILE, out.str());
}

/* printCargo */
void Truck::printCargo() {
    cout << "Driver Name: " << getName() << endl;
    cout << "Unloaded Truck Weight: " << getUnloadedWeight() << endl;
    cout << "Source City: " << getOriginCity() << endl;
    cout << "Destination City: " << getDestCity() << endl;
    cout << "Maximum Packages truck can carry: " << getMaxPkgs() << endl;
    cout << "PACKAGE LOADING INFORMATION" << endl;
    cout << "--------------------------------------------------" << endl;
    //cout << "Truck Loaded Weight: " << getUnloadedWeight() + getFullWeight() << endl;
    vector<Package*>::iterator it;
    for(it = cargoList.begin(); it != cargoList.end(); it++) {
        cout << "Package Type: " << (*it)->getName() << endl;
        cout << "Tracking Number: " << (*it)->getTrackingNumber() << endl;
        cout << "Weight: " << (*it)->getWeight() << endl;
        cout << "Cost: " << (*it)->getCost() << " dollars per pound" << endl;
    }
}

/* toString */
string Truck::toString() {
    stringstream out;
    out << "Driver Name: " << getName() << endl;
    out << "Unloaded Truck Weight: " << getUnloadedWeight() << endl;
    out << "Source City: " << getOriginCity() << endl;
    out << "Destination City: " << getDestCity() << endl;
    out << "Maximum packages truck can carry: " << getMaxPkgs() << endl;
    out << "PACKAGE LOADING INFORMATION" << endl;
    out << "-----------------------------------------" << endl;
    return out.str();
}
