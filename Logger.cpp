//
// Created by josh on 8/10/15.
//

#include "Logger.h"

Logger::Logger(string filename, string data) {
    fstream log;
    log.open(filename, ios::out | ios::app);
    log << data;
    log.close();
}
