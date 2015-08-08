/**
 * main.cpp
 * written by Joshua Harshman
 * 08/08/15
 * */

#include <iostream>
#include "Truck.h"
#include "PackageFactory.h"
using namespace std;

int main() {

    // init truck
    Truck t1 = Truck("bob", 1000, "Spokane", "Seattle");

    // Create a package
    PackageFactory *packageFactory = new PackageFactory();
    Package *p1 = packageFactory->createPackage(123450, 1);

    // see what we got
    string drivername=t1.getName();
    cout << "Driver: " << drivername << endl;
    return 0;
}