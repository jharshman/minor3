/**
 * Truck.h
 * written by Josh Harshman
 * 08/05/15
 * */

#ifndef __TRUCK_H__
#define __TRUCK_H__
#define MAXPACKAGES 500

class Truck {

        private:
                /* Instance Variables */
                string name;
                string ocity;
                string dcity;
                string alteinfo;
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
                string getName() { return name; }
                string getOriginCity() {return ocity; }
                string getDestCity() { return dcity; }
                string getAltInfo() { return altinfo; }
                int getNumPackages() { return numpackages; }
                double getFullWeight() { return full; }
                double getUnloadedWeight() { return unloaded; }

                /* Modifiers */
                void setName(string name);
                void setOriginCity(string ocity);
                void setDestCity(string dcity);
                void setAltInfo(string altinfo);
                void setNumPackages(int numpackages);
                void setFullWeight(double full);
                void setUnloadedWeight(double unloaded);

} // end class Truck
