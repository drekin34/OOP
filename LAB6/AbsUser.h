#pragma once

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class AbsUser {
public:
    virtual ~AbsUser() = default;
    virtual int calcAge() = 0;
    virtual void displayInfo() = 0;
protected:
    virtual string fullName() = 0;
    
};
