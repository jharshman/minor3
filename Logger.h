//
// Created by josh on 8/10/15.
//

#ifndef MINOR3_5_LOGGER_H
#define MINOR3_5_LOGGER_H

#define LOGFILE "/home/voodoo/log.txt"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Logger {
private:
    string logdata;
public:
    Logger()=default;
    Logger(string logname, string logdata);
    ~Logger(){}
};


#endif //MINOR3_5_LOGGER_H
