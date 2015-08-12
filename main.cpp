/**
 * main.cpp
 * written by Joshua Harshman
 * 08/08/15
 * */

#include <iostream>
#include <fstream>
#include "Truck.h"
#include "PackageFactory.h"
using namespace std;

int main() {

    fstream infile;
    infile.open("/home/voodoo/ClionProjects/minor3-5/manifest.txt", ios::in);

    string driver_name;
    string s_weight;
    string origin_city;
    string destination_city;
    string m_packages;
    int tracking;
    double weight;

    getline(infile, driver_name);
    getline(infile, s_weight);
    getline(infile, origin_city);
    getline(infile, destination_city);
    getline(infile, m_packages);

    int max_packages = stoi(m_packages);
    double truck_weight = stoi(s_weight);

    Truck truck = Truck(driver_name, truck_weight, origin_city, destination_city, max_packages);
    PackageFactory *packageFactory = new PackageFactory();
    Package *aPackage;
    while (true) {
        infile >> tracking >> weight;
        if(infile.eof()) break;
        try {
            aPackage = packageFactory->createPackage(tracking, weight);
            truck.addCargo(&aPackage);
        }catch(NullPackage &nullPackage) {
            continue;
        }
    }

    //extra logs
    truck.printTruckLoadAndDrive();

    cout << "Log file written to run directory";

    return 0;

}


