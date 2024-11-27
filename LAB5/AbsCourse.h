#pragma once

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class AbsCourse {
public:
    virtual ~AbsCourse() = default;
    virtual void displayinfo() = 0;
};
