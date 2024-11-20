#pragma once

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class Employee {
public:
    string position;
    double salary;
    int dateOfHiring;

private:
    string department;

public:
    // Constructor
    Employee();
    Employee(string Position, double Salary, int DateOfHiring, string Department);

    // Getter and Setter methods
    string getPosition();
    void setPosition(string Position);

    double getSalary();
    void setSalary(double Salary);

    int getDateOfHiring();
    void setDateOfHiring(int Date);

    string getDepartment();
    void setDepartment(string Department);

    // Method to display employee details
    void displayEmployeeInfo();

    // Destructor
    ~Employee();
};
